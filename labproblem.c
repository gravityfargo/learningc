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
	// I mean the lab specified an unsigned int...so %u I guess lol
    scanf("%u", &num);
	printf("lsbNum = %u\n", num);
    printf("lsbNum = %u\n", num);
    printf("Number = %u\n", num);
	// %04X = a hex number with four digits padded by 0s, X capitalizes the chars
	// 32 == 0032 so add '0x' to the string before it.
    printf("Number in Hex is 0x%04X\n", num);
    printf("The LSB is = %u\n", num);
	printf("The MSB is = %u\n", num);


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
