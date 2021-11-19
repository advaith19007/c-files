#include<stdio.h>
#include<string.h>
int main()
{printf("enter the limit upto which we should find primes");
int s=9;
scanf("%d",&s);
int i,j,k,d;
for(i=1;i<=s;i++)
{k=0;
    for(j=2;j<i;j++)
    if(i%j==0)
    k=1;
if(k==0)
printf("%d\n",i);}
    
    
}
