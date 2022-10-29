# Lab 2 Logbook

### Task 1 - Simple sinewave generator


**Step 1 - Specifying a 256 x 8 bit ROM**


<p align="center"> <img src="images/rom.jpg" /> </p>


The first step was to create the ROM.  I created rom.sv in the task one folder.


**Step 2 - Create the sinegen module**

This requires you to create a "top-level" module **_sinegen.sv_**, which includes two components: **_counter.sv_** and **_rom.sv_** as shown below.

<p align="center"> <img src="images/sinegen.jpg" /> </p>

I created the toplevel module and instantiated instances of the counter and rom modules.  Using wires, I was able to create the same system as the diagram illustrates.  I recieved errors while creating this code and this was because I needed to include the files as my computer was not automatically doing this.  An example is shown below.

```python
`include "task1/rom.sv"

`include "task1/counter.sv"
```

**Step 3 - Create the testbench for sinegen**

Based on what you learned from Lab 1, try to write the testbench **_sinegen_tb.cpp_** on your own. You should initially set incr[7:0] to 1.  Then use the **_vbdPlot()_** function to plot output data sample to Vbuddy.