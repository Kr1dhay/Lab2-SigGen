#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f top.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace sineDual.sv --exe sineDual_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f VsineDual.mk VsineDual

# run executable simulation file
obj_dir/VsineDual