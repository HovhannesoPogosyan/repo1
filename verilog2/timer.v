module timer (clk, rst, limit, pulse_out);
parameter WIDTH = 25;

input clk;
input rst;

input [WIDTH-1:0] limit;
output pulse_out;

reg [WIDTH-1:0] cnt;
wire [WIDTH-1:0] cnt_nxt;

assign cnt_nxt = (cnt != limit) ? cnt + {{WIDTH-1{1'b0}}, 1'b1} : {WIDTH{1'b0}};
assign pulse_out = (cnt == limit);

always @(posedge clk) begin
    if (rst) cnt <= {WIDTH{1'b0}};
    else     cnt <= cnt_nxt;
end

endmodule
