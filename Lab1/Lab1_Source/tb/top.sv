/* verilator lint_off UNUSED */
module top (
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

p1 dut (
   .clk(clk),
   .k0(k0),
   .k2(k2),
   .l0(l0),
    
   .io_hex0 (io_hex0), 
   .io_hex1 (io_hex1), 
   .io_hex2 (io_hex2), 
   .io_hex3 (io_hex3)
);

 
endmodule

