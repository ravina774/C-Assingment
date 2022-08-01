//switch statement
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	char ch;
	printf("enter the any charactor = ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		case 'a':
		case 'E':	
		case 'e':
		case 'I':
		case 'i':
		case 'O':	
		case 'o':
		case 'U':	
		case 'u':
		printf(" %c is a vowal\n",ch);
		break;
		default:
		printf(" %c is not a vowal\n",ch);			
	}
	//goto statement
	for(a=1;a<=10;a++)
	{
		if(a==5)
		{
			goto out;
		}
		printf("\nvalue of a is = %d",a);
	}
	out:
		printf("\nvalue of a is = %d",a);
		
	getch();
}
