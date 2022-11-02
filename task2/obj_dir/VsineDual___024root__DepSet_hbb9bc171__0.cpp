// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsineDual.h for the primary calling header

#include "verilated.h"

#include "VsineDual___024root.h"

VL_INLINE_OPT void VsineDual___024root___sequent__TOP__0(VsineDual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsineDual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsineDual___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__sineDual__DOT__count;
    // Body
    __Vdly__sineDual__DOT__count = vlSelf->sineDual__DOT__count;
    __Vdly__sineDual__DOT__count = ((IData)(vlSelf->rst)
                                     ? 0U : (0xffU 
                                             & ((IData)(vlSelf->sineDual__DOT__count) 
                                                + (IData)(vlSelf->en))));
    vlSelf->dout1 = vlSelf->sineDual__DOT__myRom__DOT__rom_array
        [vlSelf->sineDual__DOT__count];
    vlSelf->dout2 = vlSelf->sineDual__DOT__myRom__DOT__rom_array
        [(0xffU & ((IData)(vlSelf->sineDual__DOT__count) 
                   + (IData)(vlSelf->offset)))];
    vlSelf->sineDual__DOT__count = __Vdly__sineDual__DOT__count;
}

void VsineDual___024root___eval(VsineDual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsineDual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsineDual___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VsineDual___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VsineDual___024root___eval_debug_assertions(VsineDual___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsineDual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsineDual___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
