`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:49:44 12/07/2016 
// Design Name: 
// Module Name:    Sixty_Four_Bit_Register_File 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Sixty_Four_Bit_Register_File(
    input [4:0] read_reg_address_1,
    input [4:0] read_reg_address_2,
    input [63:0] data,
    input [4:0] write_reg_address,
    input reg_write,
	 input clk,
    output reg [63:0] reg_out_1,
    output reg [63:0] reg_out_2
    );

     reg [63:0] MEMORY [0:31];

initial begin
//do initialization here
reg_out_1=0;
reg_out_2=0;

end

always @(posedge clk) begin

reg_out_1 <= MEMORY[read_reg_address_1];
reg_out_2 <= MEMORY[read_reg_address_2];

end

always@(*)begin //for the write register
	if(reg_write)begin
       MEMORY[write_reg_address] = data;
	end //if reg_write
end//always@(*)

endmodule
