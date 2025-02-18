module counter # (parameter WIDTH=8)
(
    //interface signals
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] count      //count output
);

always_ff @ (posedge clk)
    if(rst) count <= {WIDTH{1'b0}};
    else    count <= count + 1'b1;

endmodule
