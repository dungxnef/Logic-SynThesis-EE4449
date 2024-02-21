module BCDtoSevenSegmentTest();
  logic [6:0] segment;
  logic [3:0] bcd;

  bcdtohex DUT (.bcd, .segment);
  initial begin
    $monitor($time,,
             "bcd = %d, segment = %b", bcd, segment);
    for (bcd = 4'd0; bcd < 4'd9; bcd++)
      #5;
    #5 $finish;
    
  end
  endmodule: BCDtoSevenSegmentTest
