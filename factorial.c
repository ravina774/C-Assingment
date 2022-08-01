#include<stdio.h>
#include<conio.h>
main()
//fectorial number given number , febonacci series or armstrong
{
	int n,i,a=0,b=1,c,num=0,ori,rem,result=0;
	int f=1;
	printf("enter the integer value :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of=%d\n",f);
	printf("the fabonacci series ");
	printf("%d %d",a,b);
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d ",c);
	}
	printf("\nenter the number ");
	scanf("%d",&num);
	ori=num;
	while(ori!=0)
	{
		rem=ori%10;
		result=result+rem*rem*rem;
		ori=ori/10;
	}
	
	if(result==num)
	{
	printf("%d this number is armstong no",num);
	}	
	else 
	{
	printf("%d this number is not armstorng no",num);	
	}
	getch();
}

