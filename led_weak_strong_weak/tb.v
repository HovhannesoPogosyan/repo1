`timescale 1 ns/1 ps
module top();

reg clk;
reg rst;
wire led;

led_weak_strong_weak b(.clk(clk), .rst(rst), .led(led));

initial begin
	$dumpfile("v.vcd");
	$dumpvars();
end

initial begin 
	clk = 1'b0;
	rst = 1'b0;
end

always #1 clk = ~clk;

initial begin
    #100;
    $display("%d", led);
    $finish;
end

endmodule
