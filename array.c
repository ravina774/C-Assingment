#include<conio.h>
#include<stdio.h>
main()
{
	int a[3][3],i,j;
/*	a[0]=1;//it's represent int a[5];
	a[1]=2;//int a[5]={15,1,2,3,4};
	a[2]=3;
	a[3]=4;
	a[4]=5;
	printf("the value of a[0]=%d\n",a[0]);
	printf("the value of a[1]=%d\n",a[1]);
	printf("the value of a[2]=%d\n",a[2]);
	printf("the value of a[3]=%d\n",a[3]);
	printf("the value of a[4]=%d\n",a[4]);
	printf("arrays value a[0][0]= ");
	scanf("%d",&a);
	printf("arrays value a[0][1]= ");
	scanf("%d",&a);	
	printf("arrays value a[1][0]= ");
	scanf("%d",&a);
	printf("arrays value a[1][1]= ");
	scanf("%d",&a);*/
		printf("all array\n");
		for(i=0;i<3;i++)
		{ 
			for(j=0;j<3;j++)
			{
				printf("a[%d]{%d} = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ",a[i][j]);
			}
		printf("\n");
		}
		
	getch();
}
