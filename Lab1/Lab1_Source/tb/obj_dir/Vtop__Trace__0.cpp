// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))));
        bufp->chgBit(oldp+1,(((IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state) 
                              & (0U == (IData)(vlSelf->top__DOT__dut__DOT__inA)))));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__dut__DOT__inA),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__dut__DOT__sum),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__dut__DOT__tbSum),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__dsSum),8);
        bufp->chgCData(oldp+6,((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__dsSum))),4);
        bufp->chgCData(oldp+7,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__dsSum) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+8,((0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tbSum))),4);
        bufp->chgCData(oldp+9,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__tbSum) 
                                        >> 4U))),4);
        bufp->chgBit(oldp+10,((0U == (IData)(vlSelf->top__DOT__dut__DOT__inA))));
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state),2);
        bufp->chgBit(oldp+12,((0U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))));
        bufp->chgBit(oldp+13,((3U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))));
        bufp->chgBit(oldp+14,((1U & (~ (((~ (IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state)) 
                                         & (1U == (IData)(vlSelf->top__DOT__dut__DOT__hwtb__DOT__state))) 
                                        | ((IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state) 
                                           & (0U != (IData)(vlSelf->top__DOT__dut__DOT__inA))))))));
        bufp->chgBit(oldp+15,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state) 
                                        & (0U == (IData)(vlSelf->top__DOT__dut__DOT__inA)))))));
        bufp->chgCData(oldp+16,((0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__inA) 
                                          + (IData)(vlSelf->top__DOT__dut__DOT__sum)))),8);
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__dut__DOT__sumitup__DOT__state));
    }
    bufp->chgBit(oldp+18,(vlSelf->clk));
    bufp->chgBit(oldp+19,(vlSelf->k0));
    bufp->chgBit(oldp+20,(vlSelf->k2));
    bufp->chgBit(oldp+21,(vlSelf->l0));
    bufp->chgCData(oldp+22,(vlSelf->io_hex0),7);
    bufp->chgCData(oldp+23,(vlSelf->io_hex1),7);
    bufp->chgCData(oldp+24,(vlSelf->io_hex2),7);
    bufp->chgCData(oldp+25,(vlSelf->io_hex3),7);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
