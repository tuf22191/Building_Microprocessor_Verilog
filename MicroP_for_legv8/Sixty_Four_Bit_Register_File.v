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
    output reg [63:0] reg_out_2,
	 output reg [63:0] answer_answer2
    );

     reg [63:0] MEMORY [0:31];
integer i;
initial begin
//do initialization here
reg_out_1=0;
reg_out_2=0;

for(i=0;i<32;i=i+1)begin
	MEMORY[i] = 0;
end 
//MEMORY[0]=0;
//MEMORY[1]=0;
//MEMORY[2]=0;
//MEMORY[3]=0;
//MEMORY[4]=0;
//MEMORY[5]=0;
//MEMORY[6]=0;
//MEMORY[7]=0;
//MEMORY[8]=0;
//MEMORY[9]=0;
//MEMORY[10]=0;
end

always @(posedge clk) begin

reg_out_1 <= MEMORY[read_reg_address_1];
reg_out_2 <= MEMORY[read_reg_address_2];
answer_answer2 <= MEMORY[5'b00110]; 
end

always@(posedge clk)begin //for the write register 
	if(reg_write)begin
       MEMORY[write_reg_address] = data;
	end //if reg_write
end//always@(*)

endmodule
