#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char name[10];
	char name2[10];
     printf("please enter your name :");
	 gets(name);
	 puts(name);
	 printf("enter the your II name :");
	gets(name2);
	puts(name2);
	strncat(name2,name,6);
	puts(name2);
	 strupr(name);
	 puts(name);
	 strlwr(name);
	 puts(name);
	 strrev(name);
	 puts(name);                                
	getch();
}
