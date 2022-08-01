#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],b[3][3],sum[3][3];
	int r,c;
	printf("enter the Ist value for mat \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("enter the IInd value for mat \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&b[r][c]);
		}
	}
	printf("the sum of mat = \n");
		for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			sum[r][c]=a[r][c]+b[r][c];
		}
	}
		for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d  \t",sum[r][c]);
		}
		printf("\n");
	}
	getch();	
}

