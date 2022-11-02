module sigdelay #(
    parameter ADDRESS_WIDTH = 8,
              DATA_WIDTH = 8
)(
    input wire      clk,
    input wire      rst,
    input wire     wr_en,
    input wire     rd_en,
    input wire [ADDRESS_WIDTH-1:0] offset,
    input wire [DATA_WIDTH-1:0] din,
    output wire [DATA_WIDTH-1:0] dout

);

wire [ADDRESS_WIDTH-1:0] count;

counter myCounter(
    .clk (clk),
    .rst (rst),
    .count (count)
);

ramTwoPorts myRAM(
    .clk (clk),
    .wr_en (wr_en),
    .rd_en (rd_en),
    .wr_addr (count),
    .offset (offset),
    .din (din),
    .dout (dout)
)


endmodule







