#include<stdio.h>
#include<conio.h>
main()
{
	char a[6][9];
	int i;
	printf("enter the my friends name \n");
	for(i=0;i<6;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("the name are  =  %s\n ",a[i]);
	}
	getch();
}
