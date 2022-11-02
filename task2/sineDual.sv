
module sineDual # (parameter WIDTH=8)(
    input wire      clk,
    input wire      rst,
    input wire      en,
    input wire [WIDTH-1:0] offset,
    output wire [WIDTH-1:0] dout1,
    output wire [WIDTH-1:0] dout2

);

wire [WIDTH-1:0] count;

counter myCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .count (count)
);

dualRom myRom (
    .clk (clk),
    .addr1 (count),
    .offset (offset),
    .dout1 (dout1),
    .dout2 (dout2)
);

endmodule
