#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,b=6,c=1,i,j;
//  while loop
	while(a<=10)
	{
		printf(" x = %d\n",a);
		a++;
	}
//	do while loop
	do
	{
		printf("my name ravina goyal\n");
		b++;
	}while(b<5);
//	for loop 
for(c=1;c<=10;c++)
{
	printf(" c = %d\n",c);
}
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
				printf(" %d \t",i*j);
		}
	printf(" \n");
	}
	getch();
}
