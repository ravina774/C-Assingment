#include<stdio.h>
#include<conio.h>
void main()
{
	int max =5;
	int a[max],top=-1;
	int data;
	while(1)
	{
		if(top==max-1)
		{
			printf("overflow");
			break;
		}
	else
	{
		printf("enter the value of data = ");
	scanf("%d",&data);
		a[top]=data;
		top=top+1;
	}
	}
	getch();
}
