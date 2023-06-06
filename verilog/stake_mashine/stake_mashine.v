//(we=1)permission and button=1 to change the lit led
module statek_mashine (clk, rst, button, we, led_1, led_2, led_3, led_4);

input clk;
input rst;
input we;
input button;
output reg led_1;
output reg led_2;
output reg led_3;
output reg led_4;


reg [1:0] state;

always @(posedge clk) begin
	if ((we && button) == 1) begin
		state <= state + 1;
	end
	else
		state <= state;

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
		default:  begin
                        led_1 <= 1'b0;
                        led_2 <= 1'b0;
                        led_3 <= 1'b0;
                        led_4 <= 1'b1;
                end


	endcase
	end
endmodule
	
