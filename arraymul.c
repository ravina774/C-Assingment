#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],b[3][3],mul[3][3],i,j,k;
	printf("enter the value of Ist mat \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter the value of IInd mat \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		printf("enter the value of mul mat  \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=0;k<3;k++)
 			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	    	printf("%d \t",mul[i][j]);		
		}
		printf("\n");
	}
	getch();
}
