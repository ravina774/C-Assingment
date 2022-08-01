#include<stdio.h>
#include<conio.h>
#define max 5
int a[max],top=-1;
void push();
void main()
{
	push();
		getch();
}
void push()
{
	while(1)
	{
	int data;
	if(top==max-1)
	{
		printf("overflow\n");
		break;
	}
	else
	{
		printf("enter the value of data : ");
		scanf("%d",&data);
		a[top]=data;
			top=top+1;
	}
}
}
