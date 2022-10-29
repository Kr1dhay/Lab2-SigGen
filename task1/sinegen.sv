
module sinegen # (parameter WIDTH=8)(
    input wire      clk,
    input wire      rst,
    input wire      en,
    input wire [WIDTH-1:0] incr,
    output wire [WIDTH-1:0] dout
);

wire [WIDTH-1:0] count;

counter myCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .count (count)
);

rom myRom (
    .clk (clk),
    .addr (count),
    .dout (dout)
);

endmodule
