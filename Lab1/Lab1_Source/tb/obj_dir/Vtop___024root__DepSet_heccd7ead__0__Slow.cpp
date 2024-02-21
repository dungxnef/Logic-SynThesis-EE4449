// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_h9003e6d8_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    // Body
    vlSelf->l0 = ((IData)(vlSelf->top__DOT__dut__DOT__dsSum) 
                  == (IData)(vlSelf->top__DOT__dut__DOT__tbSum));
    __Vtableidx1 = (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__tbSum) 
                            >> 4U));
    vlSelf->io_hex3 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tbSum));
    vlSelf->io_hex2 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__dsSum) 
                            >> 4U));
    vlSelf->io_hex1 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & (IData)(vlSelf->top__DOT__dut__DOT__dsSum));
    vlSelf->io_hex0 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx4];
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__calzero 
        = (0U == (IData)(vlSelf->top__DOT__dut__DOT__inA));
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateisidle 
        = (0U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state));
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateissum 
        = (1U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state));
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateisdone 
        = (3U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state));
    vlSelf->top__DOT__dut__DOT__sumitup__DOT__addOut 
        = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__inA) 
                    + (IData)(vlSelf->top__DOT__dut__DOT__sum)));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->k0 = VL_RAND_RESET_I(1);
    vlSelf->k2 = VL_RAND_RESET_I(1);
    vlSelf->l0 = VL_RAND_RESET_I(1);
    vlSelf->io_hex0 = VL_RAND_RESET_I(7);
    vlSelf->io_hex1 = VL_RAND_RESET_I(7);
    vlSelf->io_hex2 = VL_RAND_RESET_I(7);
    vlSelf->io_hex3 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__go_l = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__inA = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__sum = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__tbSum = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dsSum = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__inA = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__sum = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__tbSum = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__dsSum = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__sumitup__DOT__addOut = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__sumitup__DOT__state = 0;
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__calzero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateisidle = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateissum = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateisdone = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
