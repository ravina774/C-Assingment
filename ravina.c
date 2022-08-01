//all operator's 
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,result;
	printf("the value of a = ");
	scanf("%d",&a);
	printf("the value of b = ");
	scanf("%d",&b);
	//arithmetic operator
	printf("the result of c add = %d\n",a+b);
	printf(" the result of c sub = %d\n",a-b);
	printf("the result of c mul = %d\n",a*b);
	printf("the result of c div = %d\n",a/b);
	printf("the result of c mod = %d\n",a%b);
	//increment & decrement
	++a;
	printf("the new value of a form increases = %d\n",a);
	--b;
	printf("the new value of b form decreses = %d\n",b);
	//assignment 
	d=a;
	printf("the value of d = %d\n",d);
	printf("the value of d add = %d\n",d+=a);
	printf("the value of d sub = %d\n",d-=a);
	printf("the value of d mul = %d\n",d*=a);
	printf("the value of d div = %d\n",d/=a);
	printf("the value of d mod = %d\n",d%=a);
	//relational
	printf("if a==b then the result is  = %d\n",a==b);
	printf("if a>b then the result is  = %d\n",a>b);
	printf("if a<b then the result is  = %d\n",a<b);	
	printf("if a>=b then the result is  = %d\n",a>=b);	
	printf("if a<=b then the result is  = %d\n",a<=b);
	printf("if a!=b then the result is  = %d\n",a!=b);	
	//logical 
	result=(a==b)&&(a==b);
	printf("the result of this =%d\n",result);
	result=(a==b)||(a==b);
	printf("the result of this =%d\n",result);
	result=!(a==b);
	printf("the result of this =%d\n",result);	
	//bitwise	
	printf("the result of this = %d\n",a&b);
	//ternary
	result=(a==b?a:b);
	printf("the true result is = %d\n",result);
	//special operator6
	
	printf("the sizeof integer = %d\n",sizeof(int));
    printf("the sizeof float = %d\n",sizeof(float));
	printf("the sizeof char = %d\n",sizeof(char));	
	printf("the sizeof double %d\n",sizeof(double));
	printf("the sizeof long double %d\n",sizeof(long double));
	getch();
 } 
