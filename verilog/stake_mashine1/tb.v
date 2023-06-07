`timescale 10ns/100ps
module top;

reg [4:0]d;
reg clk;
reg reset;
reg inbits;
wire detect;

initial
begin
	clk = 0;
	reset = 0;
	inbits = 0;
end

initial
begin
reset = 1'b1;
#15 reset = 1'b0;
end

always
begin
#10 clk = ~clk;
end
always
begin
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
#20 inbits = 1;
end

pair_detect pd(.clk(clk),.inbits(ibits), .detect(detect), .reset(reset));

initial begin
	$dumpfile("v.vcd");
	$dumpvars();
end

endmodule
