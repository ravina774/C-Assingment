#include<stdio.h>
#include<conio.h>
struct book
{
	char title[20];
	char auther[20];
	int pub;
	int price;
};
main()
{
	struct book b1[2];
	int i;
	printf("please enter the book title , auther , pb, price = \n");
	for(i=0;i<2;i++)
	{
		scanf("%s%s%d%d",&b1[i].title,&b1[i].auther,&b1[i].pub,&b1[i].price);
	}
		for(i=0;i<2;i++)
	{
		printf("the book title=%s\n book auther=%s\n  book pub=%d \n book price=%d \n",b1[i].title,b1[i].auther,b1[i].pub,b1[i].price);
	}
	getch();
}
