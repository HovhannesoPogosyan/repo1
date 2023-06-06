module led_1_4 (clk, rst,led_a, led_b, led_c, led_d, led_e, led_f, led_g);

input clk;
input rst;
output reg led_a;
output reg led_b;
output reg led_c;
output reg led_d;
output reg led_e;
output reg led_f;
output reg led_g;


reg [24:0] cnt;
reg [3:0] state;


always @(posedge clk) begin
	if (cnt == 25'd1125000) begin
		cnt <= 0;
		state <= state + 1;
	end
	else if (state == 4'b1010)
		state <= 0;
	else
		cnt <= cnt + 1;

end

always @(posedge clk) begin
	if (rst) begin
                led_a <= 1'b0;
                led_b <= 1'b0;
                led_c <= 1'b0;
                led_d <= 1'b0;
		        led_e <= 1'b0;
		        led_f <= 1'b0;
		        led_g <= 1'b0;
		       
		       


        end
	else
	case (state)
		4'b0000: begin
			led_a <= 1'b0;
                	led_b <= 1'b0;
                	led_c <= 1'b0;
                	led_d <= 1'b0;
                	led_e <= 1'b0;
                	led_f <= 1'b0;
                	led_g <= 1'b1;

		end
		 4'b0001: begin
                        led_a <= 1'b1;
                        led_b <= 1'b0;
                        led_c <= 1'b0;
                        led_d <= 1'b1;
                        led_e <= 1'b1;
                        led_f <= 1'b1;
                        led_g <= 1'b1;
		end
		  4'b0010: begin
                        led_a <= 1'b0;
                        led_b <= 1'b0;
                        led_c <= 1'b1;
                        led_d <= 1'b0;
                        led_e <= 1'b0;
                        led_f <= 1'b1;
                        led_g <= 1'b0;

                end
		  4'b0011: begin
                        led_a <= 1'b0;
                        led_b <= 1'b0;
                        led_c <= 1'b0;
                        led_d <= 1'b0;
                        led_e <= 1'b1;
                        led_f <= 1'b1;
                        led_g <= 1'b0;

                end
		  4'b0100: begin
                        led_a <= 1'b1;
                        led_b <= 1'b0;
                        led_c <= 1'b0;
                        led_d <= 1'b1;
                        led_e <= 1'b1;
                        led_f <= 1'b0;
                        led_g <= 1'b0;

                end
		  4'b0101: begin
                        led_a <= 1'b0;
                        led_b <= 1'b1;
                        led_c <= 1'b0;
                        led_d <= 1'b0;
                        led_e <= 1'b1;
                        led_f <= 1'b0;
                        led_g <= 1'b0;

                end
		  4'b0110: begin
                        led_a <= 1'b1;
                        led_b <= 1'b1;
                        led_c <= 1'b0;
                        led_d <= 1'b0;
                        led_e <= 1'b0;
                        led_f <= 1'b0;
                        led_g <= 1'b0;

                end
		  4'b0111: begin
                        led_a <= 1'b0;
                        led_b <= 1'b0;
                        led_c <= 1'b0;
                        led_d <= 1'b1;
                        led_e <= 1'b1;
                        led_f <= 1'b1;
                        led_g <= 1'b1;

                end
		  4'b1000: begin
                        led_a <= 1'b0;
                        led_b <= 1'b0;
                        led_c <= 1'b0;
                        led_d <= 1'b0;
                        led_e <= 1'b0;
                        led_f <= 1'b0;
                        led_g <= 1'b0;

                end
		  4'b1001: begin
                        led_a <= 1'b0;
                        led_b <= 1'b0;
                        led_c <= 1'b0;
                        led_d <= 1'b1;
                        led_e <= 1'b1;
                        led_f <= 1'b0;
                        led_g <= 1'b0;

                end
		default:begin
			led_a <= 1'b1;
                	led_b <= 1'b1;
                	led_c <= 1'b1;
                	led_d <= 1'b1;
                	led_e <= 1'b1;
                	led_f <= 1'b1;
                	led_g <= 1'b1;
		end

	endcase
	
end
endmodule
