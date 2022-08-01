#include<stdio.h>
#include<conio.h>
void main()
{
	char a[16]="Ravina"*p,i;
	p=&a;
	for(i=0;i<6;i++)
	{
		printf("a[%d] = %c\n",i,a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf(" %c",a[i]);
	}
	getch();
}
/*
	int a[5],i,b[5],temp;
	printf("----------array and pointer-------------\n");
	printf("ener the value of first array = \n");
	for(i=1;i<=5;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\ndisply the value of first array = \n");
	for(i=1;i<=5;i++)
	{
		printf(" %d ",a[i]);
	}
		printf("\nenter the value of secound array = \n");
	for(i=1;i<=5;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("\ndisply the value of secound array = \n");
	for(i=1;i<=5;i++)
	{
		printf(" %d ",b[i]);
	}
	printf("\nthe swap value of array = \n");
	for(i=1;i<=5;i++)
	{
	temp=a[i];
	a[i]=b[i];
	b[i]=a[i];
	}
	printf("\ndisply the value of srothing array = \n");
	for(i=1;i<=5;i++)
	{
		printf(" %d \t %d\n",a[i],b[i]);
	}
*/
