#include<stdio.h>
#include<conio.h>
int add(int ,int );
int sub(int ,int );
int mul(int ,int );
int divi(int ,int );
main()
{
	int choice,num1,num2,sum1,sub1,mul1,divi1;
	printf("enter the 1st number =");
	scanf("%d",&num1);
	printf("enter the 2nd number =");
	scanf("%d",&num2);	
	printf("press 1 for addition \n" );
	printf("press 2 for sub \n" );
	printf("press 3 for mul  \n" );
	printf("press 4 for divi  \n" );
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			sum1 = add(num1,num2);
			printf("the number of sum = %d ",sum1);
			break;
		case 2:
			sub1 = sub(num1,num2);
			printf("the number of sub = %d ",sub1);
			break;
		case 3:
			mul1 = mul(num1,num2);
			printf("the number of mul = %d ",mul1);
			break;
		case 4:
			divi1 = divi(num1,num2);
			printf("the number of divi = %d ",divi1);
			break;
			
	}
getch();		
}
int add(int num1,int num2)
{
	int z;
	z = num1+num2;
  printf(" %d",z);
 
}
int sub(int num1,int num2)
{
	int z;
	z = num1-num2;
	printf("%d",z);
}
int mul(int num1,int num2)
{
	int z;
	z = num1*num2;
	printf("%d",z);
}
int divi(int num1,int num2)
{
	int z;
	z = num1/num2;
	printf("%d",z);
}
