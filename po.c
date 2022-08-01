#include<stdio.h>
#include<conio.h>
void f(int *p,int *q)
{
	p=q;
	*p=2;
	printf("p = %d\n",p);
	printf("q = %d\n",q);
	printf("*p = %d\n",*p);
	printf("*q = %d\n",*q);
	printf("&p = %d\n",&p);
	printf("&q = %d\n",&q);		
}
int i=0,j=1;
void main()
{
	f(&i,&j);
	printf("i=%d,j=%d\n",i,j);
	
	getch();
}
