// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_h9003e6d8_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__sumitup__DOT__state;
    CData/*1:0*/ __Vdly__top__DOT__dut__DOT__hwtb__DOT__state;
    CData/*7:0*/ __Vdly__top__DOT__dut__DOT__inA;
    CData/*7:0*/ __Vdly__top__DOT__dut__DOT__tbSum;
    // Body
    __Vdly__top__DOT__dut__DOT__sumitup__DOT__state 
        = vlSelf->top__DOT__dut__DOT__sumitup__DOT__state;
    __Vdly__top__DOT__dut__DOT__inA = vlSelf->top__DOT__dut__DOT__inA;
    __Vdly__top__DOT__dut__DOT__hwtb__DOT__state = vlSelf->top__DOT__dut__DOT__hwtb__DOT__state;
    __Vdly__top__DOT__dut__DOT__tbSum = vlSelf->top__DOT__dut__DOT__tbSum;
    if (vlSelf->k2) {
        if ((((~ (IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state)) 
              & (1U != (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))) 
             | ((IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state) 
                & (0U == (IData)(vlSelf->top__DOT__dut__DOT__inA))))) {
            __Vdly__top__DOT__dut__DOT__sumitup__DOT__state = 0U;
        }
        __Vdly__top__DOT__dut__DOT__hwtb__DOT__state 
            = (((IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateisidle) 
                & (~ (IData)(vlSelf->k0))) ? 1U : (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateissum) 
                                                    & (0U 
                                                       == (IData)(vlSelf->top__DOT__dut__DOT__inA)))
                                                    ? 3U
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateisdone) 
                                                     & (IData)(vlSelf->k0))
                                                     ? 0U
                                                     : (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))));
        if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))) {
            __Vdly__top__DOT__dut__DOT__tbSum = 0U;
        } else if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))) {
            __Vdly__top__DOT__dut__DOT__tbSum = (0xffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__tbSum) 
                                                    + (IData)(vlSelf->top__DOT__dut__DOT__inA)));
        } else if ((3U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))) {
            __Vdly__top__DOT__dut__DOT__tbSum = vlSelf->top__DOT__dut__DOT__tbSum;
        }
        if (((IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state) 
             & (0U == (IData)(vlSelf->top__DOT__dut__DOT__inA)))) {
            vlSelf->top__DOT__dut__DOT__dsSum = vlSelf->top__DOT__dut__DOT__sum;
        }
        if ((((~ (IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state)) 
              & (1U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))) 
             | ((IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state) 
                & (0U != (IData)(vlSelf->top__DOT__dut__DOT__inA))))) {
            __Vdly__top__DOT__dut__DOT__sumitup__DOT__state = 1U;
            vlSelf->top__DOT__dut__DOT__sum = vlSelf->top__DOT__dut__DOT__sumitup__DOT__addOut;
        } else if (((IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state) 
                    & (0U == (IData)(vlSelf->top__DOT__dut__DOT__inA)))) {
            vlSelf->top__DOT__dut__DOT__sum = 0U;
        }
    } else {
        __Vdly__top__DOT__dut__DOT__sumitup__DOT__state = 0U;
        __Vdly__top__DOT__dut__DOT__hwtb__DOT__state = 0U;
        __Vdly__top__DOT__dut__DOT__tbSum = 0U;
        vlSelf->top__DOT__dut__DOT__dsSum = 0U;
        vlSelf->top__DOT__dut__DOT__sum = 0U;
    }
    if ((1U & (((~ (IData)(vlSelf->k2)) | (1U != (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))) 
               | (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__calzero)))) {
        __Vdly__top__DOT__dut__DOT__inA = 0x7bU;
    } else if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))) {
        __Vdly__top__DOT__dut__DOT__inA = (0xffU & 
                                           ((IData)(vlSelf->top__DOT__dut__DOT__inA) 
                                            - (IData)(1U)));
    }
    vlSelf->top__DOT__dut__DOT__tbSum = __Vdly__top__DOT__dut__DOT__tbSum;
    __Vtableidx1 = (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__tbSum) 
                            >> 4U));
    vlSelf->io_hex3 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tbSum));
    vlSelf->io_hex2 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx2];
    vlSelf->l0 = ((IData)(vlSelf->top__DOT__dut__DOT__dsSum) 
                  == (IData)(vlSelf->top__DOT__dut__DOT__tbSum));
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__dsSum) 
                            >> 4U));
    vlSelf->io_hex1 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & (IData)(vlSelf->top__DOT__dut__DOT__dsSum));
    vlSelf->io_hex0 = Vtop__ConstPool__TABLE_h9003e6d8_0
        [__Vtableidx4];
    vlSelf->top__DOT__dut__DOT__sumitup__DOT__state 
        = __Vdly__top__DOT__dut__DOT__sumitup__DOT__state;
    vlSelf->top__DOT__dut__DOT__inA = __Vdly__top__DOT__dut__DOT__inA;
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__state = __Vdly__top__DOT__dut__DOT__hwtb__DOT__state;
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__calzero 
        = (0U == (IData)(vlSelf->top__DOT__dut__DOT__inA));
    vlSelf->top__DOT__dut__DOT__sumitup__DOT__addOut 
        = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__inA) 
                    + (IData)(vlSelf->top__DOT__dut__DOT__sum)));
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateisidle 
        = (0U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state));
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateissum 
        = (1U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state));
    vlSelf->top__DOT__dut__DOT__hwtb__DOT__stateisdone 
        = (3U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->k0 & 0xfeU))) {
        Verilated::overWidthError("k0");}
    if (VL_UNLIKELY((vlSelf->k2 & 0xfeU))) {
        Verilated::overWidthError("k2");}
}
#endif  // VL_DEBUG
