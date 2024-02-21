#define MAX_SIM 200
void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->clk = sim_unit % 2;
  dut->k0 = 0 ;  // Start operation
  // Reset if l0 = 1 ( Sum from testbench and module equal ) 
   if (dut->l0 == 1 
       && !(dut->io_hex0 == 0x40 
       && dut->io_hex1 == 0x40 
       && dut->io_hex2 == 0x40 
       && dut->io_hex3 == 0x40)) {
    dut->k2 = 0;
  } else {
    dut->k2 = 1;
  }
  
}

