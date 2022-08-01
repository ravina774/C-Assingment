//all if statement
#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
printf("enter the value of a = ");
scanf("%d",&a);
printf("enter the value of b = ");
scanf("%d",&b);
//simple if statement
if(a==b)
{
	printf("this statement is right\n");
}
/*else
printf("this is wrong");*/
//if else statement
else
{	
	printf("this statement is wrong\n");
}
//nested if else statement
printf("nested if else statement result = \n");
if(a==b)
{
	if(a>=b)
	{
		printf("the result is %d >= %d\n",a,b);
	}
	else
	{
	printf("the statement is wrong\n");	
	}
}
	else
	{
		printf("all statement is wrong\n");
	}
	//if else ladder
	printf("if else ladder statement result = \n");
	if(a==b)
	{
		printf("the result %d = %d \n",a,b);
	}
	else if(a>b)
	{
		printf("the result %d > %d \n",a,b);
	}
	else if(a<b)
	{
		printf("the result %d < %d \n",a,b);
	}
	getch();
}
