`timescale 1 ns/1 ps
module top();

reg clk;
reg rst;
wire led_a;
wire led_b;
wire led_c;
wire led_d;
wire led_e;
wire led_f;
wire led_g;

led_1_4 b(.clk(clk), .rst(rst), .led_a(led_a), .led_b(led_b), .led_c(led_c), .led_d(led_d), .led_e(led_e), .led_f(led_f), .led_g(led_g));

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
    #10;
    $display("%d %d %d %d %d %d %d", led_a, led_b, led_c, led_d, led_e, led_f, led_g);
    $finish;
end

endmodule
