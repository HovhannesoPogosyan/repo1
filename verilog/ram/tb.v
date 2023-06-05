
`timescale 1 ns/1 ps
module ram1_tb;
parameter ADDR_WIDTH = 4;
parameter DATA_WIDTH = 8;
localparam DEPTH = (1<<ADDR_WIDTH);

reg clk;
reg we;
reg [ADDR_WIDTH-1:0] addr;
reg [DATA_WIDTH-1:0] i_data;
wire [DATA_WIDTH-1:0] o_data;
integer i;

ram1 #(.DATA_WIDTH(DATA_WIDTH)) u1
(
 .clk(clk),
 .addr(addr),
 .i_data(i_data),
 .o_data(o_data),
 .we(we)
);

initial begin
        $dumpfile("v.vcd");
        $dumpvars();
end
always #1 clk = ~clk;
initial begin
{clk,we,addr,i_data} = 0;
//we=1;
//addr=2;
//i_data=3;


repeat (2) @(posedge clk);
we = 1;

for(i=0; i<2**DEPTH;i = i + 1)begin
        repeat(1) @(posedge clk)addr = i;i_data = i + 10;
end

repeat (2) @(posedge clk);
we = 0;
repeat (2) @(posedge clk);

for(i=0; i<2**DEPTH;i = i + 1)begin
        repeat(1) @(posedge clk)addr = i;
end
end
endmodule


