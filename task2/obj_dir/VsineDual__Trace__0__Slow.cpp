// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsineDual__Syms.h"


VL_ATTR_COLD void VsineDual___024root__trace_init_sub__TOP__0(VsineDual___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VsineDual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsineDual___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"offset", false,-1, 7,0);
    tracep->declBus(c+5,"dout1", false,-1, 7,0);
    tracep->declBus(c+6,"dout2", false,-1, 7,0);
    tracep->pushNamePrefix("sineDual ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"offset", false,-1, 7,0);
    tracep->declBus(c+5,"dout1", false,-1, 7,0);
    tracep->declBus(c+6,"dout2", false,-1, 7,0);
    tracep->declBus(c+7,"count", false,-1, 7,0);
    tracep->pushNamePrefix("myCounter ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+7,"count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myRom ");
    tracep->declBus(c+8,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+7,"addr1", false,-1, 7,0);
    tracep->declBus(c+4,"offset", false,-1, 7,0);
    tracep->declBus(c+5,"dout1", false,-1, 7,0);
    tracep->declBus(c+6,"dout2", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VsineDual___024root__trace_init_top(VsineDual___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VsineDual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsineDual___024root__trace_init_top\n"); );
    // Body
    VsineDual___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VsineDual___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsineDual___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsineDual___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VsineDual___024root__trace_register(VsineDual___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VsineDual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsineDual___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VsineDual___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VsineDual___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VsineDual___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VsineDual___024root__trace_full_sub_0(VsineDual___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsineDual___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsineDual___024root__trace_full_top_0\n"); );
    // Init
    VsineDual___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsineDual___024root*>(voidSelf);
    VsineDual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VsineDual___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsineDual___024root__trace_full_sub_0(VsineDual___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VsineDual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsineDual___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullCData(oldp+4,(vlSelf->offset),8);
    bufp->fullCData(oldp+5,(vlSelf->dout1),8);
    bufp->fullCData(oldp+6,(vlSelf->dout2),8);
    bufp->fullCData(oldp+7,(vlSelf->sineDual__DOT__count),8);
    bufp->fullIData(oldp+8,(8U),32);
}
