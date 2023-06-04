module spram #(
parameter ADDR_SIZE = 4,
parameter DATA_SIZE = 8
)
(
input clk,
input [ADDR_SIZE-1:0] addr,
input [DATA_SIZE-1:0] i_data,
output [DATA_SIZE-1:0] o_data,
input we
);

localparam DEPTH = (1<<ADDR_SIZE);
reg [DATA_SIZE-1:0] ram [DEPTH-1:0];

always @(posedge clk)
begin
        if(we) ram[addr] = i_data;
end

assign o_data = ram[addr];

endmodule

