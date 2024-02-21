// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(k0,0,0);
    VL_IN8(k2,0,0);
    VL_OUT8(l0,0,0);
    VL_OUT8(io_hex0,6,0);
    VL_OUT8(io_hex1,6,0);
    VL_OUT8(io_hex2,6,0);
    VL_OUT8(io_hex3,6,0);
    CData/*0:0*/ top__DOT__go_l;
    CData/*0:0*/ top__DOT__done;
    CData/*7:0*/ top__DOT__inA;
    CData/*7:0*/ top__DOT__sum;
    CData/*7:0*/ top__DOT__tbSum;
    CData/*7:0*/ top__DOT__dsSum;
    CData/*7:0*/ top__DOT__dut__DOT__inA;
    CData/*7:0*/ top__DOT__dut__DOT__sum;
    CData/*7:0*/ top__DOT__dut__DOT__tbSum;
    CData/*7:0*/ top__DOT__dut__DOT__dsSum;
    CData/*7:0*/ top__DOT__dut__DOT__sumitup__DOT__addOut;
    CData/*0:0*/ top__DOT__dut__DOT__sumitup__DOT__state;
    CData/*0:0*/ top__DOT__dut__DOT__hwtb__DOT__calzero;
    CData/*1:0*/ top__DOT__dut__DOT__hwtb__DOT__state;
    CData/*0:0*/ top__DOT__dut__DOT__hwtb__DOT__stateisidle;
    CData/*0:0*/ top__DOT__dut__DOT__hwtb__DOT__stateissum;
    CData/*0:0*/ top__DOT__dut__DOT__hwtb__DOT__stateisdone;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
