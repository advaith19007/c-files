#include<stdio.h>
#include<stdlib.h>
struct node
{int INFO;
 struct node *NEXT;
 struct node *PREVIOUS;};
struct node *LAST=NULL;
struct node *FIRST=NULL;
void insert(int);
void print();
int main()
{
struct node *help;
int s=1;
do
{printf("1.insert\n2.print\n3.exit\n");
int k,k1,k3;
scanf("%d",&k);
switch(k)
	{case 1:
		{printf("enter the number");
		 scanf("%d",&k1);
		 insert(k1);
		 break;}
	
	
	case 2:
		{print();
		 break;}
	case 3:
		{exit(1);}
	default:
		{printf("wrong choice");
		 break;}
	}
}while(s=1);
}

void insert (int k)
{struct node *PTR=(struct node*)malloc(sizeof(struct node));
PTR->INFO=k;
if(FIRST==NULL)
{FIRST=LAST=PTR;
PTR->NEXT=NULL;
PTR->PREVIOUS=NULL;}
else
{LAST->NEXT=PTR;
PTR->NEXT=NULL;
PTR->PREVIOUS=LAST;
LAST=PTR;}
}
void print()
{struct node *PTR;
if(FIRST==NULL)
printf("EMPTY");
else if(FIRST==LAST)
printf("%d",FIRST->INFO);
else
{for(PTR=FIRST;PTR!=LAST;PTR=PTR->NEXT)
printf("\t%d",PTR->INFO);
printf("\t%d\n",LAST->INFO);
}
}
