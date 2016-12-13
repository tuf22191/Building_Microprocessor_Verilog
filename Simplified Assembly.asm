
.eqv  f ,$t1 
.eqv g, $t2
.eqv h, $t3
.eqv i, $t4
.eqv j_, $t5
.eqv temp_result, $t6
.eqv temp_result2, $t7
            #INSTRUCTIONS ARE IN GREEN:  the zero register is zero
li $t2, 12 # {10'b1010101010,5'b00000,7'b0001100 ,5'b00000,5'b00010}
li $t3, 10 # {10'b1010101010,5'b00000,7'b0001010 ,5'b00000,5'b00011}
li $t4, 5  # {10'b1010101010,5'b00000,7'b0000101 ,5'b00000,5'b00100} 
li $t5, 2  # {10'b1010101010,5'b00000,7'b0000010 ,5'b00000,5'b00101}


                     ########################working till here
sub $t6, $t2, $t3  # {10'b1100101100,5'b00010,7'b0000000 ,5'b00011,5'b00110}
mult $t6, $t4 #{10'b1111100000,5'b00110,7'b0000000 ,6'b00100,5'b00110}
mflo $t6   #combined with previous step 
sub $t7, $t4, $t5 # {10'b1100101100,5'b00100,7'b0000000 ,5'b00101,5'b00111}
add $t6, $t7, $t6 # {10'b1010101010,5'b00111,7'b0000000 ,5'b00110,5'b00110}
div $t6,$t5 #{10'b0000011111,5'b00110,7'b0000000 ,5'b00101,5'b00110}
mflo $t6 # combined with previous step
sb $t6, 268501152  #{10'b1111011000,5'b00000,7'b0000111 ,5'b00110,5'b00000}


         #10'b1000101000: begin  //ADDITION !!!
	 #10'b1100101100: begin  //SUBTRACTION !!!
	 #10'b0000011111: begin  //DIVISION !!!
  	 # 10'b1111100000: begin  //MULTIPLICATION !!!
	 #10'b1010101010: begin  //Load Immediate Instruction !!!
	 #10'b1111011010: begin  //Loading Instruction from Data Memory!!
	 #10'b1111011000: begin  //Storing Instruction from Data Memory!!
		
	 
