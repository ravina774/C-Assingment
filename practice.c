 #include<stdio.h>
#include<conio.h>
main()
{
	int a[5],b[5],i,t=0,sum=0,mul;
	for(i=0;i<5;i++)	
	{
		printf("please enter first number of matrix = ");
		scanf("%d",&a[i]);
	}
	printf("\n");
		for(i=0;i<5;i++)	
	{
		printf("please enter sec number of matrix = ");
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("you enter the first number of matrix a[%d] = %d\n",i,a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("you enter the sec number of matrix a[%d] = %d\n",i,a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		t=t+a[i];
	}
		for(i=0;i<5;i++)
	{
		sum=sum+b[i];
	}
	printf("total = %d\n",t);
	printf("sum = %d \n",sum);
	for(i=0;i<5;i++)
	{
	 mul=a[i]*b[i];
	printf("mul = %d\n",mul);
	}
	getch();
}  
