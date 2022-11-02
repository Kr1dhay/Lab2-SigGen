// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsineDual.h for the primary calling header

#include "verilated.h"

#include "VsineDual__Syms.h"
#include "VsineDual___024root.h"

void VsineDual___024root___ctor_var_reset(VsineDual___024root* vlSelf);

VsineDual___024root::VsineDual___024root(VsineDual__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsineDual___024root___ctor_var_reset(this);
}

void VsineDual___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VsineDual___024root::~VsineDual___024root() {
}
