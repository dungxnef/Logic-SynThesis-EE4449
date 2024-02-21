module downstream // For Altera DE10s board
	(input	logic	clk, reset_l,
	 input	logic	done,
	 input logic [7:0] sum_in,
     	 output logic [7:0] sum_out
	 );

////////////////
always @(posedge clk)
begin
	if (!reset_l)
		sum_out <= 8'b0;
	else if (done)
		sum_out <= sum_in;
end
////////////////

endmodule
