// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsineDual.h for the primary calling header

#ifndef VERILATED_VSINEDUAL___024ROOT_H_
#define VERILATED_VSINEDUAL___024ROOT_H_  // guard

#include "verilated.h"

class VsineDual__Syms;

class VsineDual___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(offset,7,0);
    VL_OUT8(dout1,7,0);
    VL_OUT8(dout2,7,0);
    CData/*7:0*/ sineDual__DOT__count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*7:0*/, 256> sineDual__DOT__myRom__DOT__rom_array;

    // INTERNAL VARIABLES
    VsineDual__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsineDual___024root(VsineDual__Syms* symsp, const char* name);
    ~VsineDual___024root();
    VL_UNCOPYABLE(VsineDual___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
