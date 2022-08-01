#include<stdio.h>
#include<conio.h>
main()
{
	char nm[30],rg[20];
	char city[]="ajmer";
	char name[2];
	int i;
	//user se input simple
	printf("enter the name: \n");
 scanf("%s",nm);
 printf("enter the city:\n ");
 scanf("%s",rg);
 printf("you are entered name: %s\n",nm);
 printf("you are entered city: %s\n",rg);
 
 //string for loop se
	for(i=0;city[i]!='\0';i++)
	{
		printf("%c",city[i]);
	}
	//simple string
 printf("\nthe city name is = %s\n",city);
 //for loop se use se input 
 printf("enter the name");
 for(i=0;i<5;i++)
 {
	scanf("%s",name[i]);
 }
 
	getch();
}
