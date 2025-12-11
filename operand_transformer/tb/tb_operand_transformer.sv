`timescale 1ns / 1ps
import operand_tf_pkg::*;

module tb_operand_transformer;

    // Clock and Reset
    logic clk;
    logic rst_n;
    
    // DUT Interface
    logic                valid_in, ready_in;
    operand_input_t      data_in;
    logic                ready_out, valid_out;
    operand_output_t     data_out;
    
    // DUT Instance
    operand_transformer dut (.*);
    
    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    // Waveform Dump
    initial begin
        $dumpfile("operand_transformer.vcd");
        $dumpvars(0, tb_operand_transformer);
    end
    
    // Model Function for Expected Result Calculation
    function logic [7:0] calc_expected(input logic [7:0] elem, input logic [7:0] scale);
        logic [3:0] lead_one_pos;
        logic [15:0] target_msb_pos;
        
        // 1. Find Leading One
        if      (elem[7]) lead_one_pos = 7;
        else if (elem[6]) lead_one_pos = 6;
        else if (elem[5]) lead_one_pos = 5;
        else if (elem[4]) lead_one_pos = 4;
        else if (elem[3]) lead_one_pos = 3;
        else if (elem[2]) lead_one_pos = 2;
        else if (elem[1]) lead_one_pos = 1;
        else if (elem[0]) lead_one_pos = 0;
        else              return 8'd0; // Zero case

        // 2. Calc Shift
        target_msb_pos = {12'd0, lead_one_pos} + {8'd0, scale};

        // 3. Overflow Check
        if (target_msb_pos > 7) begin
            // MSB Aligned
            return elem << (7 - lead_one_pos);
        end else begin
            // Normal Shift
            return elem << scale;
        end
    endfunction
    
    // =========================================================================
    // Test Procedure
    // =========================================================================
    initial begin
        // Initialize
        rst_n = 0;
        valid_in = 0;
        ready_out = 0;
        data_in = '0;
        
        repeat(3) @(posedge clk);
        rst_n = 1;
        @(posedge clk);
        
        $display("\n========================================");
        $display("Operand Transformer Test (Custom Pattern)");
        $display("Elements: 1, 3, 7... 255 (Repeated)");
        $display("Scales:   0, 0.. 1, 1.. 2, 2.. 3, 3..");
        $display("========================================\n");
        
        // Mode 0 (1:2 Sharing)
        data_in.cfg.scale_sharing_mode = 0;
        wait(ready_in);
        
        // -------------------------------------------------------------
        // Setup Pattern
        // -------------------------------------------------------------
        
        // 1. Elements: 1, 3, 7, 15, 31, 63, 127, 255 (Repeated 4 times)
        // Group of 8. 32 elements total.
        for (int i = 0; i < 32; i++) begin
            int val_idx = i % 8; // 0..7
            // logic: 2^(idx+1) - 1
            data_in.elements[i] = (1 << (val_idx + 1)) - 1;
        end
        
        // 2. Scales: 
        // Lanes 0-3  (Elems 0-7)   -> Scale 0
        // Lanes 4-7  (Elems 8-15)  -> Scale 1
        // Lanes 8-11 (Elems 16-23) -> Scale 2
        // Lanes 12-15(Elems 24-31) -> Scale 3
        for (int lane = 0; lane < 16; lane++) begin
            data_in.micro_scales[lane] = lane / 4;
        end
        
        $display("Input Setup Complete. Waiting for result...");
        
        // Send
        valid_in = 1;
        @(posedge clk);
        valid_in = 0;
        
        wait(valid_out);
        @(posedge clk);
        @(posedge clk); // one extra cycle safe margin for read
        
        // Verify
        $display("\nCheck Results:");
        begin
            int fail_count = 0;
            
            for (int i = 0; i < 32; i++) begin
                int lane = i / 2;
                logic [7:0] elem  = data_in.elements[i];
                logic [7:0] scale = data_in.micro_scales[lane];
                logic [7:0] res   = data_out.flattened_elements[i];
                logic [7:0] exp   = calc_expected(elem, scale);
                
                string status = (res === exp) ? "✓" : "✗";
                if (res !== exp) fail_count++;
                
                $display("  Elem %2d (Lane %2d): E=%3d (0x%2h) S=%1d -> Exp %3d (0x%2h) Got %3d (0x%2h) %s", 
                         i, lane, elem, elem, scale, exp, exp, res, res, status);
            end
            
            if (fail_count == 0)
                $display("\nSUCCESS: All pattern checks passed!");
            else
                $display("\nFAILURE: %0d mismatches found.", fail_count);
        end

        ready_out = 1;
        @(posedge clk);
        ready_out = 0;
        
        repeat(10) @(posedge clk);
        $display("\nTest Complete!");
        $finish;
    end
    
    // Watchdog
    initial begin
        #5000;
        $error("Timeout!");
        $finish;
    end

endmodule
