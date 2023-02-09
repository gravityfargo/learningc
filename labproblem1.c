#include <stdio.h>

long convertToBinary(int);
long mostSignificantBit(long); 
long leastSignificantBit(long);

void main()
{
	// ints are 16 by default
	int userInput, mostsignificantbit, leastsignificantbit;
	long binaryNumber, msbFlag, lsbFlag;
	userInput = 0;

	printf("Enter a number between 0 and 65535: ");
	scanf("%d", &userInput);

	/* Error checking goes here */
	if (userInput > 65535 || userInput < 0)
	{
		// I dont think I need to specify unsigned anywhere since I am
		// preventing numbers < 0 anyway
		printf("Number must be <= 65535 and > 0.\n");
	}
	else
	{

		// Check least and most significant bits using code writen below
		binaryNumber = convertToBinary(userInput);
		mostsignificantbit = mostSignificantBit(binaryNumber);
		leastsignificantbit = leastSignificantBit(binaryNumber);
		lsbFlag = userInput & 15;
		msbFlag = userInput >> 12;

		//  print all the fs
		printf("lsbNum = %d\n", lsbFlag);
		printf("msbNum = %d\n", msbFlag);
		printf("Number = %d\n", userInput);

		// %04X = a hex number with four digits padded by 0s, X capitalizes the chars
		// 32 == 0032 so add '0x' to the string before it.
		printf("Number in Hex is 0x%04X\n", userInput);

		// %08ld 8 digit long int padded with 0s
		printf("Number in binary is = %08ld\n", binaryNumber);
		printf("The LSB is = %d\n", leastsignificantbit);
		printf("The MSB is = %d\n", mostsignificantbit);
	}
}

long convertToBinary(int userInput)
{
	long localbinaryNumber = 0;
	long remainder, temp = 1;

	while (userInput != 0)
	{
		remainder = userInput % 2;
		userInput = userInput / 2;
		localbinaryNumber = localbinaryNumber + remainder * temp;
		temp = temp * 10;
	}
	return localbinaryNumber;
}

long mostSignificantBit(long binaryNumber)
{
	while(binaryNumber >= 10)
	{
		binaryNumber = binaryNumber / 10;
	}
	return binaryNumber;
}

long leastSignificantBit(long binaryNumber)
{
	return binaryNumber % 10;
}