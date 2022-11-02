#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VsineDual.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 8
#define ROM_SZ 256


int main(int argc, char **argv, char **env){
    int clockCount;
    int tick;

    Verilated::commandArgs(argc, argv);   // init top verilog instance
    VsineDual* top = new VsineDual;         // init trace dump

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("sinegen2.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("L2T1: SigGen");

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 1;
    top->offset = 64;

    for (clockCount=0; clockCount<MAX_SIM_CYC; clockCount++) {
    // dump variables into VCD file and toggle clock
      for (tick=0; tick<2; tick++) {
        tfp->dump (2*clockCount+tick);
        top->clk = !top->clk;
        top->eval ();
      }

      vbdPlot(int (top->dout1), 0, 255);
      vbdPlot(int (top->dout2), 0, 255);

      top->offset = vbdValue();

      vbdCycle(clockCount);

      if ((Verilated::gotFinish()) || (vbdGetkey()=='q')){
          exit(0);
      }    
    }

    vbdClose();
    tfp->close();
    exit(0);

}
