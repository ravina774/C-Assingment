#include<stdio.h>
#include<conio.h>
main()
//star pattern
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
	  for(j=1;j<=i;j++)
	    {
	    	printf("*");
		}
		printf("\n");	
	}
	printf("\n");
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		printf("\n");
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("  ");
		}
		for(k=5;k>=i;k--)
		{
				printf("*");
		}
		printf("\n");
	}
		printf("\n");
	for(i=5;i>=1;i--)
	{
		for(j=5;j>i;j--)
		{
		printf("  ");
		}
		for(k=1;k<=i;k++)
		{
				printf("*");
		}
		printf("\n");
	}
		printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=i;j<5;j++)
		{
		printf("  ");
		}
		for(k=1;k<(i*2);k++)
		{
				printf(" * ");
		}
		printf("\n");
	}
		printf("\n");
	for(i=5;i>=1;i--)
	{
		for(j=5;j>i;j--)
		{
		printf("  ");
		}
		for(k=1;k<(i*2);k++)
		{
				printf(" * ");
		}
		printf("\n");
	}
	getch();
}
