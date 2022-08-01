#include<stdio.h>
#include<conio.h>
struct date
{
int d;
int m;
int y;	
};
typedef struct date date;
main()
{
	
	date d1,d2;
/*	d1.d=19;
	d1.m=02;
	d1.y=2020;
	d2=d1;*/
	printf("todays date dd/mm/yyyy = ");
	scanf("%d / %d / %d",&d1.d,&d1.m,&d1.y);
	printf("tomorrow date dd/mm/yyyy = ");
	scanf("%d / %d / %d",&d2.d,&d2.m,&d2.y);
	printf("todays date %d / %d / %d  \n",d1.d,d1.m,d1.y);
	printf("tomorrow date %d / %d / %d",d2.d,d2.m,d2.y);
	getch();
}
