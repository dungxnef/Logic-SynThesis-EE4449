module p1 (
    input logic clk,
    input logic k0,
    input logic k2,
    output logic l0,
    
    output logic [6:0] io_hex0, 
    output logic [6:0] io_hex1, 
    output logic [6:0] io_hex2, 
    output logic [6:0] io_hex3
);

    logic  go_l, done;
    logic [7:0] inA, sum, tbSum, dsSum;

    sumitup sumitup (
        .clk(clk),
        .reset_l(k2),
        .go_l(go_l),
        .inA(inA),
        .done(done),
        .sum(sum)
    );

    downstream downstream (
        .clk(clk),
        .reset_l(k2),
        .done(done),
        .sum_in(sum),
        .sum_out(dsSum)
    );

    p1hwtb hwtb (
        .clk(clk),
        .reset_l(k2),
        .Button0(k0),
        .valueToinA(inA),
        .tbSum(tbSum),
        .go_l(go_l),
        .L0(l0),
        .outResult(dsSum)
    );

    bcdtohex bcd3 (.bcd(tbSum[7:4]), .segment(io_hex3));
    bcdtohex bcd2 (.bcd(tbSum[3:0]), .segment(io_hex2));

    bcdtohex bcd1 (.bcd(dsSum[7:4]), .segment(io_hex1));
    bcdtohex bcd0 (.bcd(dsSum[3:0]), .segment(io_hex0));

endmodule

