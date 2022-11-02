// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsineDual.h"
#include "VsineDual__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsineDual::VsineDual(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsineDual__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , offset{vlSymsp->TOP.offset}
    , dout1{vlSymsp->TOP.dout1}
    , dout2{vlSymsp->TOP.dout2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VsineDual::VsineDual(const char* _vcname__)
    : VsineDual(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsineDual::~VsineDual() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VsineDual___024root___eval_initial(VsineDual___024root* vlSelf);
void VsineDual___024root___eval_settle(VsineDual___024root* vlSelf);
void VsineDual___024root___eval(VsineDual___024root* vlSelf);
#ifdef VL_DEBUG
void VsineDual___024root___eval_debug_assertions(VsineDual___024root* vlSelf);
#endif  // VL_DEBUG
void VsineDual___024root___final(VsineDual___024root* vlSelf);

static void _eval_initial_loop(VsineDual__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VsineDual___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VsineDual___024root___eval_settle(&(vlSymsp->TOP));
        VsineDual___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VsineDual::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsineDual::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsineDual___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VsineDual___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VsineDual::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VsineDual::final() {
    VsineDual___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsineDual::hierName() const { return vlSymsp->name(); }
const char* VsineDual::modelName() const { return "VsineDual"; }
unsigned VsineDual::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VsineDual::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsineDual___024root__trace_init_top(VsineDual___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsineDual___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsineDual___024root*>(voidSelf);
    VsineDual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VsineDual___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VsineDual___024root__trace_register(VsineDual___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsineDual::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsineDual::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsineDual___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
