//dynamic memory alloction 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,*p,*p1,sum=0,i,n1,*p2,*p3,sum2=0,*q;
	printf("-------------malloc-----------\n");
	printf("enter the size of array = ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("the Malloc add is =  %u\n",p);
	p1=p;
	if(p==NULL)
	{
		printf("error : out of memory \n");	
	}
	else 
	{
	printf("enter the value of array :- \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		sum=sum+*p;
		p++;
	}
	printf("element of array :- \n");
	for(i=0;i<n;i++)
	{
		printf("the value of %d = %d\n",i,*p1);
		p1++;
	}
	printf("the sum is = %d",sum);
	}
/*	printf("\n-------------calloc-----------\n");
	printf("enter the size of array = ");
	scanf("%d",&n1);
	p2=(int*)calloc(n1,n1*sizeof(int));
	printf("the Calloc add is =  %u\n",p2);
	p3=p2;
	if(p2==NULL)
	{
		printf("error : out of memory \n");	
	}
	else 
	{
	printf("enter the value of array :- \n");
	for(i=0;i<n1;i++)
	{
		printf("%d = ",i);
		scanf("%d",p2);
		sum2=sum2+*p2;
		p2++;
	}
	printf("element of array :- \n");
	for(i=0;i<n1;i++)
	{
		printf("the value of %d = %d\n",i,*p3);
		p3++;
	}
	printf("the sum is = %d",sum2);
	}*/
	printf("\n----------Realloc-----------------\n");
	printf("enter new size of array = ");
	scanf("%d",&n);
	p=(int*)realloc(p,n*sizeof(int));
	printf("the Realloc add is =  %u\n",p);
/*	q=p1;
	if(p1==NULL)
	{
		printf("error : out of memory \n");	
	}
	else 
	{
	printf("enter the value of array :- \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p1);
		sum=sum+*p1;
		p1++;
	}
	printf("element of array :- \n");
	for(i=0;i<n;i++)
	{
		printf("the value of %d = %d\n",i,*q);
		q++;
	}
	printf("the sum is = %d",sum);
	}*/
	
	
	
	
	
	
	
	
	
	getch();
}
