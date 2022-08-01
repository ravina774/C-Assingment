#include<stdio.h>
#include<conio.h>
main()
{
   int a[3][3],i,j;
   printf("enter the  value of mat =\n");
   for(i=0;i<=2;i++)
   {
   	for(j=0;j<=2;j++)
	   {
	   	scanf("%d",&a[i][j]);
	   }
    }
    printf("before transmition mat =\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	 printf("after transmition mat =\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d \t",a[j][i]);
		}
		printf("\n");
	}  
	getch();	
}
