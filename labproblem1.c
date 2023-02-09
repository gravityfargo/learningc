#include <stdio.h>

int lsb(int);
int msb(int);

void main()
{
	int num, msbFlag, lsbFlag, binNum;
	num = 0;

	printf("Enter a number between 0 and 65535: ");
	// I mean the lab specified an unsigned int...so %u I guess lol
	scanf("%u", &num);

	/* Error checking goes here */
	if (num > 65535 || num < 0)
	{
		printf("Number must be <= 65535 and > 0.\n");
	}
	else
	{

		// Check least and most significant bits using code writen below
		lsbFlag = lsb(num);
		msbFlag = msb(num);
		binNum = convertToBinary(num);

		/* Edit this printf statement for part A, B and C */

		// printf("lsbNum = %u\n", lsbFlag);
		// printf("msbNum = %u\n", msbFlag);
		printf("Number = %u\n", num);
		// %04X = a hex number with four digits padded by 0s, X capitalizes the chars
		// 32 == 0032 so add '0x' to the string before it.
		printf("Number in Hex is 0x%04X\n", num);
		printf("Number in binary is = %d\n", binNum);
		// printf("The MSB is = %u\n", num);
	}
}

int lsb(int num)
{
	int lsbFlag;

	return lsbFlag;
}

int msb(int num)
{
	int msbFlag;
	// if you devide a number by 2 and count the increments, that count represents the
	// position of the MSB

	return msbFlag;
}

int convertToBinary(int num)
{
	{
		int binarynum = 0;
		int remainder, temp = 1;

		while (num != 0)
		{
			remainder = num % 2;
			num = num / 2;
			binarynum = binarynum + remainder * temp;
			temp = temp * 10;
		}
		return binarynum;
	}
}
