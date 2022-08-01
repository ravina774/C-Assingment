#include<stdio.h>
#include<conio.h>
void table(int);
void main()
{
	int a;
	printf("enter the value of print table = ");
	scanf("%d",&a);
	table(a);
	getch();
}
table(int a)
{
	int i;
	for(i=1;i<11;i++)
	{
		printf("%d X %d = %d\n",a,i,a*i);		
	}	
}
