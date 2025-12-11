`timescale 1ns / 1ps
import operand_tf_pkg::*;

// =============================================================================
// Module: simple_multiplier
// =============================================================================
// Purpose:
//   Generic integer scaler for Operand Transformer.
//   Computes: Result = Element << Scale (Element * 2^Scale)
//   Output Handling:
//     - Normal Case: Returns (Element << Scale)
//     - Overflow Case: Returns MSB-Justified result (Preserves top 8 significant bits)
//       (Equivalent to Floating Point Normalization + Exponent adjustment implicitly)
// =============================================================================

module simple_multiplier (
    input  logic [7:0]     element_in,
    input  logic [7:0]     scale_in,
    output logic [7:0]     result_out
);
    logic [3:0] lead_one_pos; // 0..7
    logic       is_zero;
    
    // 1. Leading One Detector for 8-bit input
    always_comb begin
        is_zero = 0;
        if      (element_in[7]) lead_one_pos = 7;
        else if (element_in[6]) lead_one_pos = 6;
        else if (element_in[5]) lead_one_pos = 5;
        else if (element_in[4]) lead_one_pos = 4;
        else if (element_in[3]) lead_one_pos = 3;
        else if (element_in[2]) lead_one_pos = 2;
        else if (element_in[1]) lead_one_pos = 1;
        else if (element_in[0]) lead_one_pos = 0;
        else begin
            lead_one_pos = 0;
            is_zero = 1;
        end
    end

    // 2. Shift Logic with MSB Alignment
    always_comb begin
        if (is_zero) begin
            result_out = 8'd0;
        end else begin
            // Check potential MSB position after shift
            // Use 16-bit to avoid overflow during check
            logic [15:0] target_msb_pos;
            target_msb_pos = {12'd0, lead_one_pos} + {8'd0, scale_in};
            
            if (target_msb_pos > 7) begin
                // Overflow Case: Align MSB to bit 7
                // Shift element left by (7 - lead_one_pos)
                result_out = element_in << (7 - lead_one_pos);
            end else begin
                // Normal Case: Result fits in 8 bits
                result_out = element_in << scale_in;
            end
        end
    end

endmodule
