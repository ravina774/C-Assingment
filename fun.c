#include<string.h>
#include<conio.h>
float avg();
int fun()
{
	static int num=16;
	return num--; 
}
void main()
{
	int a,b,c,total;
	printf("enter the value of three numbers = ");
	scanf("%d %d %d",&a,&b,&c);
	total = avg(a,b,c);
	printf("total = %d",total);
	for(fun();fun();fun())
	{
		printf("%d\n",fun());
	}
	getch();
}
float avg(a,b,c)
{
	int avg=(a,b,c)/3;
	return avg;	
}
