#include<stdio.h>
void main()
{
	char a='5';
	char b='8';
	printf("Difference: %d\n", b-a);
	printf("Sum :%d\n", b+a);
	
	/*
	Since the numbers 5 and 8 are declared as characters and not integers, they will be stored as ASCII codes and not the numbers themselves.
	ASCII code of '5'=53 and '8'=56. While taking the difference and sum, we have used the format specifier of that of an integer (%d).
	So, while calculating the sum and difference, the ASCII code of these numbers will be used and so,
	Difference = 56-53=3
	Sum = 56+53=109
	
	*/
}
