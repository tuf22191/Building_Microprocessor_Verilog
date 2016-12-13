`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:26:37 12/06/2016 
// Design Name: 
// Module Name:    Instruction_Memory_Thirty_Two_Bit 
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
module Instruction_Memory_Thirty_Two_Bit(
    output reg [31:0] instruction, //instruction coming out (the "data" out)
    input [31:0] address,
	 input clk
    );

	 reg [31:0] THE_MEMORY [0:63];//8 bits long the memory
	 
	 
	 integer i;
	 //initializae the data : SAW THIS ONLINE - So we have all 0's , do we have to initialize it?
	 initial begin   //probably do not need this
		//instruction <= 0; //non blocking part
		
		/*
		THE_MEMORY[0]= 0;//0; //initialize  it
 		THE_MEMORY[1]={10'b1010101010,5'b00000,7'b0001100 ,5'b00000,5'b00010};
 		THE_MEMORY[2]={10'b1010101010,5'b00000,7'b0001010 ,5'b00000,5'b00011};
 		THE_MEMORY[3]={10'b1010101010,5'b00000,7'b0000101 ,5'b00000,5'b00100};
 		THE_MEMORY[4]={10'b1010101010,5'b00000,7'b0000010 ,5'b00000,5'b00101};
		///good up till here
 		THE_MEMORY[5]={10'b1100101100,5'b00010,7'b0000000 ,5'b00011,5'b00110};//5
		THE_MEMORY[6]={10'b1100101100,5'b00010,7'b0000000 ,5'b00011,5'b00110};
		THE_MEMORY[7]={10'b1100101100,5'b00010,7'b0000000 ,5'b00011,5'b00110};
		THE_MEMORY[8]={10'b1100101100,5'b00010,7'b0000000 ,5'b00011,5'b00110};
		
		THE_MEMORY[9]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[10]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[11]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[12]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		
 		THE_MEMORY[13]={10'b1111100000,5'b00110,7'b0000000 ,5'b00100,5'b00110};	//6	
		THE_MEMORY[14]={10'b1111100000,5'b00110,7'b0000000 ,5'b00100,5'b00110};
		THE_MEMORY[15]={10'b1111100000,5'b00110,7'b0000000 ,5'b00100,5'b00110};
		THE_MEMORY[16]={10'b1111100000,5'b00110,7'b0000000 ,5'b00100,5'b00110};
		
 		THE_MEMORY[17]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[18]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[19]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[20]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		
 		THE_MEMORY[21]={10'b1100101100,5'b00100,7'b0000000 ,5'b00101,5'b00111};//7
 		THE_MEMORY[22]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00111};
		THE_MEMORY[23]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00111};
		THE_MEMORY[24]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00111};
		
		THE_MEMORY[25]={10'b1010101010,5'b00111,7'b0000000 ,5'b00110,5'b00110};//8
 		THE_MEMORY[26]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[27]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[28]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
	
		THE_MEMORY[29]={10'b0000011111,5'b00110,7'b0000000 ,5'b00101,5'b00110};//9
 		THE_MEMORY[30]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[31]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
		THE_MEMORY[32]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00110};
				
		THE_MEMORY[33]={10'b1111011000,5'b00000,7'b0000111 ,5'b00110,5'b00000};//10
		THE_MEMORY[34]={10'b0000000000,5'b00000,7'b0000000 ,5'b00000,5'b00000};
		
		for(i=35;i<64;i=i+1)begin   //CHANGE THIS!!!!!!!!!!!!!!!!!!!!!!!!!
		THE_MEMORY[i] = 0;
		end  
		*/
		
			
		THE_MEMORY[0]= 0;//0; //initialize  it
 		THE_MEMORY[1]={10'b1010101010,5'b00000,7'b0001100 ,5'b00000,5'b00010};
 		THE_MEMORY[2]={10'b1010101010,5'b00000,7'b0001010 ,5'b00000,5'b00011};
 		THE_MEMORY[3]={10'b1010101010,5'b00000,7'b0000101 ,5'b00000,5'b00100};
 		THE_MEMORY[4]={10'b1010101010,5'b00000,7'b0000010 ,5'b00000,5'b00101};
		///good up till here
 		THE_MEMORY[5]={10'b1100101100,5'b00010,7'b0000000 ,5'b00011,5'b00110};//5
 		THE_MEMORY[6]={10'b1111100000,5'b00110,7'b0000000 ,5'b00100,5'b00110};	//6
 		THE_MEMORY[7]={10'b1100101100,5'b00100,7'b0000000 ,5'b00101,5'b00111};//7
		THE_MEMORY[8]={10'b1010101010,5'b00111,7'b0000000 ,5'b00110,5'b00110};//8
		THE_MEMORY[9]={10'b0000011111,5'b00110,7'b0000000 ,5'b00101,5'b00110};//9
	  THE_MEMORY[10]={10'b1111011000,5'b00000,7'b0000111 ,5'b00110,5'b00000};//10
		
		for(i=11;i<64;i=i+1)begin   //CHANGE THIS!!!!!!!!!!!!!!!!!!!!!!!!!
		THE_MEMORY[i] = 0;
		end
		
		
		//put the data here
	 end
	 
//	 always @(*)//(posedge clk) // remove the posedge?
//		begin
//		    instruction <= THE_MEMORY[address[4:0]];
//	 end

	 always @(posedge clk)//(posedge clk) // remove the posedge?
		begin
		    instruction <= THE_MEMORY[address[4:0]];
	 end
			// assign instruction = THE_MEMORY[address[4:0]];

	 //clock on outside coming in, or just have external wait, (have clk as input)

endmodule
