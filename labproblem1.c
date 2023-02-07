#include <stdio.h>

int lsb(int);
int msb(int);

void main() {
	int num, msbFlag, lsbFlag;

	/* Error checking goes here */
    

	// Check least and most significant bits using code writen below
	lsbFlag = lsb(num);
	msbFlag = msb(num);
	
	/* Edit this printf statement for part A, B and C */
	printf("Number = %d\n", num);

}

int lsb(int num) {
	int lsbFlag;
	/* Part B: Write code here to check the least significant bit of the number */	


	
	return lsbFlag;
}

int msb(int num) {
	int msbFlag;
	/* Part C: Write code here to check the most significant bit of the number */




	return msbFlag;
}
