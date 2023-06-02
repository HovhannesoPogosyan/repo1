`timescale 1 ns/1 ps
module top();

reg [31:0] in1;
reg [31:0] in2;
wire [32:0] out;

full_add add_test(.in1(in1), .in2(in2), .out(out));

initial begin
	$dumpfile("v.vcd");
	$dumpvars();
end

initial begin
    in1 = 8996; 
    in2 = 1004; 
    #1;
    $display("%d+%d=%d", in1, in2, out);
    in1 = 2563; 
    in2 = 5487; 
    #1;
    $display("%d+%d=%d", in1, in2, out);
end

endmodule
