#include<stdio.h>
void main()
{
	int rnum=9007;
	switch(rnum%4)
	{
		case 1: printf("1\n");
		case 2: printf("2\n");
		case 3: printf("3\n");
		case 0: printf("4\n");
	}
	
}
