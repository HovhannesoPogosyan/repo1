module led_1_4 (clk, rst, led_1, led_2, led_3, led_4);

input clk;
input rst;
output reg led_1;
output reg led_2;
output reg led_3;
output reg led_4;

reg [24:0] cnt;
reg [1:0] state;

always @(posedge clk) begin
	if (cnt == 25'd2500000) begin
		cnt <= 0;
		state <= state + 1;
	end
	else
		cnt <= cnt + 1;

end

always @(posedge clk) begin
	if (rst) begin
                led_1 <= 1'b0;
                led_2 <= 1'b0;
                led_3 <= 1'b0;
                led_4 <= 1'b0;
        end
	else
	case (state)
		2'b00: begin
			led_1 <= 1'b1;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b0;
		end
		2'b01: begin
			led_1 <= 1'b0;
		        led_2 <= 1'b1;
		        led_3 <= 1'b0;
		        led_4 <= 1'b0;
		end
		2'b10: begin
			led_1 <= 1'b0;
		        led_2 <= 1'b0;
		        led_3 <= 1'b1;
		        led_4 <= 1'b0;
		end
		2'b11: begin
			led_1 <= 1'b0;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b1;
		end
		default:begin
			led_1 <= 1'b0;
                        led_2 <= 1'b0;
                        led_3 <= 1'b0;
                        led_4 <= 1'b0;
                end

	endcase
	
end
endmodule
