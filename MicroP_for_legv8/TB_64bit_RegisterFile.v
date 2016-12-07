`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:31:20 12/07/2016
// Design Name:   Sixty_Four_Bit_Register_File
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_64bit_RegisterFile.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sixty_Four_Bit_Register_File
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_64bit_RegisterFile;

	// Inputs
	reg [4:0] read_reg_address_1;
	reg [4:0] read_reg_address_2;
	reg [63:0] data;
	reg [4:0] write_reg_address;
	reg reg_write;
	reg clk;

	// Outputs
	wire [63:0] reg_out_1;
	wire [63:0] reg_out_2;


   always@(*)begin
	clk=1;
	#10;
	clk=0;
	#10;	
	end

	always @(*) begin
	
	$display("Simulation Starting : ***********");
	#110000;
	$display("Simulation Ended : Success ******");
	$finish;
	end



	// Instantiate the Unit Under Test (UUT)
	Sixty_Four_Bit_Register_File uut (
		.read_reg_address_1(read_reg_address_1), 
		.read_reg_address_2(read_reg_address_2), 
		.data(data), 
		.write_reg_address(write_reg_address), 
		.reg_write(reg_write), 
		.clk(clk), 
		.reg_out_1(reg_out_1), 
		.reg_out_2(reg_out_2)
	);

     integer i;
	initial begin
		// Initialize Inputs
		read_reg_address_1 = 0;
		read_reg_address_2 = 0;
		data = 0;
		write_reg_address = 0;
		reg_write = 0;
		clk = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
		
		//1. write is working
		//2. if read is working
		
		//read 0's
		read_reg_address_1 = 5'b00100;
		read_reg_address_2 = 5'b00100;
		
      @(posedge clk);
		if(reg_out_1 != 0)begin
		$display("First Test  Not working!");
		end
		if(reg_out_2 != 0)begin
		$display("First Test  Not working!");
		end
		
		//write to address 9
		i = 43;
      data = {32'b00000000000000000000000000000000,i};
		write_reg_address = 5'b01001;
		reg_write = 1;
		if(reg_out_1 != 0)begin
		$display("Second Test  Not working1!");
		end
		if(reg_out_2 != 0)begin
		$display("Second Test  Not working2!");
		end
      @(posedge clk);
		
		reg_write =0;
		read_reg_address_1 = 5'b01001;
		if(reg_out_1 != {32'b00000000000000000000000000000000,i})begin
		$display("Third Test  Not working1!");
		end
		if(reg_out_2 != 0)begin
		$display("Third Test  Not working2!");
		end
      @(posedge clk);

      i = 3;
      data = {32'b00000000000000000000000000000000,i};
		write_reg_address = 5'b10000;
		reg_write = 1;
		@(posedge clk);
		i=43;
		read_reg_address_2 = 5'b10000;
		if(reg_out_1 != {32'b00000000000000000000000000000000,43})begin
		$display("Forth Test  Not working1!");
		end
		if(reg_out_2 != {32'b00000000000000000000000000000000,3})begin
		$display("Forth Test  Not working2!");
		end
      @(posedge clk);

		// Add stimulus here

	end
      
endmodule

