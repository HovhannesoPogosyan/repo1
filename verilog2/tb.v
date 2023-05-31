`timescale 1 ns/1 ps
module top();

reg clk;
reg rst;
wire led_1;
wire led_2;
wire led_3;
wire led_4;

led_1_4 b(.clk(clk), .rst(rst), .led_1(led_1), .led_2(led_2), .led_3(led_3), .led_4(led_4));

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
    #1000000000;
    $display("%d %d %d %d", led_1, led_2, led_3, led_4);
    #1000000000;
    $display("%d %d %d %d", led_1, led_2, led_3, led_4);
    #1000000000;
    $display("%d %d %d %d", led_1, led_2, led_3, led_4);
    #1000000000;
    $display("%d %d %d %d", led_1, led_2, led_3, led_4);
    #1000000000;
    $display("%d %d %d %d", led_1, led_2, led_3, led_4);
    #1000000000;
    $display("%d %d %d %d", led_1, led_2, led_3, led_4);
    #1000000000;
    $display("%d %d %d %d", led_1, led_2, led_3, led_4);
    #1000000000;
    $display("%d %d %d %d", led_1, led_2, led_3, led_4);
    #1000000000;
    $display("%d %d %d %d", led_1, led_2, led_3, led_4);
    $finish;
end

endmodule
