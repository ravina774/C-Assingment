#include<conio.h>
#include<stdio.h>
#include<stdio.h>
main()
{
	char r1[15];
	char r2[15];
	int i;
	printf("enter the your I name :");
	gets(r1);
	puts(r1);
	strcpy(r2,r1);
	puts(r1);
	puts(r2);
	i=strlen(r1);
	printf("%d",i);
	getch();
}



