module shift(
    input  wire        clk,
    input  wire [31:0] in_data,
    output reg  [31:0] out_data
);
    always @(posedge clk) begin
        out_data <= in_data;
    end
endmodule
