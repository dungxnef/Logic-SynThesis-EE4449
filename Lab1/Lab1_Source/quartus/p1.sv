module p1 (
    input logic CLOCK_50,
    input logic KEY0,
    input logic KEY2,
    output logic LED0,
    output logic [6:0] HEX3, HEX2, // testbench out
    output logic [6:0] HEX1, HEX0  // downstream out
);

    logic reset_l, go_l, done;
    logic [7:0] inA, sum, tbSum, dsSum;

    sumitup su (
        .clk(CLOCK_50),
        .reset_l(KEY2),
        .go_l(go_l),
        .inA(inA),
        .done(done),
        .sum(sum)
    );

    downstream ds (
        .clk(CLOCK_50),
        .reset_l(KEY2),
        .done(done),
        .sum_in(sum),
        .sum_out(dsSum)
    );

    p1hwtb tb (
        .clk(CLOCK_50),
        .reset_l(KEY2),
        .Button0(KEY0),
        .valueToinA(inA),
        .tbSum(tbSum),
        .go_l(go_l),
        .L0(LED0),
        .outResult(dsSum)
    );

    bcdtohex bcd3 (.bcd(tbSum[7:4]), .segment(HEX3));
    bcdtohex bcd2 (.bcd(tbSum[3:0]), .segment(HEX2));

    bcdtohex bcd1 (.bcd(dsSum[7:4]), .segment(HEX1));
    bcdtohex bcd0 (.bcd(dsSum[3:0]), .segment(HEX0));

endmodule

