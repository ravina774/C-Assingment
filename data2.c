#include<stdio.h>
#include<conio.h>
#define max 5
int a[max],top=-1;
void push();
void pop();
void main()
{
	push();
	pop();
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
void pop()
{
	while(1)
	{
		if(top==-1)
		{
			printf("underflow");
			break;
		}
		else
		{
		printf("value = %d\n",a[top]);
		top=top-1;	
		}
	}
}

