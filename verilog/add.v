module add(in1, in2, c_in, out, c_out);

input in1, in2, c_in;
output out, c_out;

assign out = (in1 ^ in2) ^ c_in;
assign c_out = (in1 & in2) ^ ((in1 ^ in2) & c_in);

endmodule


module full_add(in1, in2, out);

input [31:0] in1, in2;
output [32:0] out;

parameter n = 32;
wire [0:32] c;
assign c[0] = 0;

generate
	genvar i;
	for (i = 0; i < n; i = i + 1)begin
		add add_0(in1[i], in2[i], c[i], out[i], c[i+1]);
	end
endgenerate

assign out[32] = c[32];

endmodule
