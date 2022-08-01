#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char string[20],string1[20];
	printf("1st string :-");
	gets(string);
	printf("2nd string :-");
	gets(string1);
	if (strcmp(string,string1)==0)
	{
		printf("same string");
	}
	else
	{
		printf("not same string");
	}
	getch();
}
