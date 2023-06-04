module led_weak_strong_weak (clk, rst,led);

input clk;
input rst;
output reg led;

reg [24:0] cnt;
reg [5:0] state;

always @(posedge clk) begin
	if (cnt == 25'd1125000) begin
		cnt <= 0;
		state <= state + 1;
	end
	else if (state == 6'b100000)
		state <= 0;
	else
		cnt <= cnt + 1;

end

always @(posedge clk) begin
	if (rst) begin
                led <= 1'b0;
		state <= 0;
		cnt <= 0;
        end
	else
	case (state)
		6'b000000:led <= 1'b1;
		6'b000001:led <= 1'b0;
		6'b000010:led <= 1'b0;
		6'b000011:led <= 1'b0;

		6'b000100:led <= 1'b1;
		6'b000101:led <= 1'b1;
		6'b000110:led <= 1'b0;
		6'b000111:led <= 1'b0;

		6'b001000:led <= 1'b1;
		6'b001001:led <= 1'b1;
		6'b001010:led <= 1'b1;
                6'b001011:led <= 1'b0;

                6'b001100:led <= 1'b1;
                6'b001101:led <= 1'b1;
                6'b001110:led <= 1'b1;
                6'b001111:led <= 1'b1;

                6'b010000:led <= 1'b1;
                6'b010001:led <= 1'b1;
                6'b010010:led <= 1'b1;
                6'b010011:led <= 1'b0;

		6'b010100:led <= 1'b1;
                6'b010101:led <= 1'b1;
                6'b010110:led <= 1'b0;
                6'b010111:led <= 1'b0;

                6'b011000:led <= 1'b1;
                6'b011001:led <= 1'b0;
                6'b011010:led <= 1'b0;
                6'b011011:led <= 1'b0;

                6'b011100:led <= 1'b0;
                6'b011101:led <= 1'b0;
                6'b011110:led <= 1'b0;
                6'b011111:led <= 1'b0;

		default:led <= 1'b1;
	endcase
end
endmodule
