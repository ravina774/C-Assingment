#include<stdio.h>
#include<conio.h>
void maths(int,int);
main()
{
	int a,b;
	printf("enter the 1st number ");
	scanf("%d",&a);
	printf("enter the 2nd number ");
	scanf("%d",&b);
	maths(a,b);
	getch();
}
void maths(int a,int b)
{
int c;
c=a+b;
printf("the result of add =%d \n",c);
c=a-b;
printf("the result of sub =%d \n",c);
c=a*b;
printf("the result of mul =%d \n",c);
c=a/b;
printf("the result of divi =%d \n",c);
}
