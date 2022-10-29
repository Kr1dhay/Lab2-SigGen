module sinegen # (parameter WIDTH=8)(
    input wire      clk,
    input wire      rst,
    input wire      en,
    output wire [WIDTH-1:0] dout
);

wire [WIDTH-1:0] count;

counter myCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .count (count)
);

rom myRom (
    .clk (clk),
    .addr (count)
);

endmodule
