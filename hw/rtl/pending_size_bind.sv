// 디버그용 모듈: 단순히 incr/decr 이벤트를 로그로 찍는다.
module dbg_pending_size (
    input  logic        clk,
    input  logic        reset,
    input  logic [31:0] size_m,
    input  logic [7:0]  incr_m,
    input  logic [7:0]  decr_m
);
    always @(posedge clk) begin
        if (!reset) begin
            // incr이나 decr가 0이 아닌 사이클은 전부 찍어버리자 (일단 거칠게)
            if ((incr_m != 0) || (decr_m != 0)) begin
                $display("[DBG][%m][%0t] size=%0d incr=%0d decr=%0d",
                         $time, size_m, incr_m, decr_m);
            end
        end
    end
endmodule

// VX_pending_size 인스턴스들에 전부 bind
bind VX_pending_size dbg_pending_size dbg_pending_size_i (
    .clk   (clk),
    .reset (reset),
    .size_m(size),  // VX_pending_size 내부 포트/신호 이름
    .incr_m(incr),
    .decr_m(decr)
);
