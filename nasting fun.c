#include<string.h>
#include<conio.h>
int div();
int sum();
void main()
{
	int x;
	x=div();
	printf("div= %d",x);
	getch();
}
int sum()
{
	int a,b,c;
	printf("enter the two values = ");
	scanf("%d%d",&a,&b);
	printf("%d\n",c=a+b);
	return c;
}
int div()
{
	int d;
	float div;
	d=sum();
	printf("div = %d\n",d);
	div=d/2.0;	
	return div;
}
