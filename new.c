#include<stdio.h>
#include<conio.h>
int rec(int a);
main()
{
	int a=1;
	rec(a);
	getch();
}
int rec(int a)
{
	if(a<=10)
	{
	printf("%d \n",a);
	rec(a+1);
	}
}
