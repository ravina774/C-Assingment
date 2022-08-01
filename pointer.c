#include<stdio.h>
#include<conio.h>
main()
{
	int x=10,y=5;
	int *p,*j,**r;
	p=&x;
	j=&y;
	r=&p;
	printf("\nthe value of x = %d\n",x);
	printf("\nthe add of &x =%u\n",&x);
	printf("\nthe value of y = %d\n",y);
	printf("\nthe add of &y =%u\n",&y);
	printf("\nthe value of p = %u\n",p);
	printf("\nthe value of p+1 = %u\n",p+1);
	printf("\nthe value of p-1= %u\n",p-1);
	printf("\nthe pointer value *p =%u\n",*p);
	printf("\nthe add of &p =%u\n",&p);
	printf("\nthe value of j = %u\n",j);
	printf("\nthe pointer value *j =%u\n",*j);
	printf("\nthe add of &j =%u\n",&j);
	printf("\nthe total value *p+*j =%u\n",*p + *j);
	printf("\nthe sub value *p- *j =%u\n",*p- *j);
	printf("\nthe mul value *p * *j =%u\n",*p * *j);
	printf("\nthe divi value *p / *j =%u\n",*p / *j);
	printf("\nthe mod value = %d\n",*p%*j);
	printf("\nthe value of r = %u\n",r);
	printf("\nthe value of pointer *r= %u\n",*r);
	printf("\nthe pointer value **r =%u\n",**r);
	printf("\nthe add of &r =%u\n",&r);
	getch();
}
