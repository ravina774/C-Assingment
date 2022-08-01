#include<stdio.h>
#include<conio.h>
int sum(int);
int fac(int);
void main()
{
	int a;
	printf("enter the no. =");
	scanf("%d",&a);
	printf("the sum  is %d \n",sum(a));
	printf("the fectorial of %d = %d\n",a,mul(a));
		getch();
}
	int sum(int a)
	{	
		if(a==0)
		{
			return 0;
		}
		else 
		{
		return(a%10+sum(a/10));	
		}
	}
	int fac(int a)
	{
		if(a>=1)
		{
			return a*sum(a-1);
		}
		else 
		{
			return 1;
		}
	}
