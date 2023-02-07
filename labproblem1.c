#include <stdio.h>

int lsb(int);
int msb(int);

void main() {
	int num, msbFlag, lsbFlag;
    num = 0;

	/* Error checking goes here */
    

	// Check least and most significant bits using code writen below
	lsbFlag = lsb(num);
	msbFlag = msb(num);
	
	/* Edit this printf statement for part A, B and C */
    printf("Enter a number between 0 and 65535: ");
    // scanf();
	printf("lsbNum = %d\n", num);
    printf("lsbNum = %d\n", num);
    printf("Number = %d\n", num);
    printf("Number in Hex is \n");
    printf("The LSB is = %d\n", num);


}

int lsb(int num) {
	int lsbFlag;
	/* Part B: Write code here to check the least significant bit of the number */	


	
	return lsbFlag;
}

int msb(int num) {
	int msbFlag;
    // if you devide a number by 2 and count the increments, that count represents the 
    // position of the MSB




	return msbFlag;
}
