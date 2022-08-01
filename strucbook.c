#include<stdio.h>
#include<conio.h>
struct book
{
	char name[15];
	char author[10];
	int pages;
	float price;
};
struct student
{
	char name[10];
	int rollno;
	int age;
	float totalmarks;	
};
main()
{
	struct book b1;
	printf("the book data is :-\n");
/*	d1.name=c;
	d1.author=dupiya;
	d1.pages=285;
	d1.price=240;
	printf("the book name is = %s",d1.name);*/
	printf("enter the book name =");
	scanf("%s",&b1.name);
	printf("enter the book author =");
	scanf("%s",&b1.author);
	printf("enter the book pages =");
	scanf("%d",&b1.pages);
	printf("enter the book price =");
	scanf("%f",&b1.price);
	printf("\nthe book name is = %s\n",b1.name);
	printf("the book author is = %s\n",b1.author);
	printf("the book pages is = %d\n",b1.pages);
	printf("the book price is = %f\n",b1.price);
//	scanf("%s%d%s%f",&b1.name,&b1.pages,&b1.author,&b1.price);
//	printf("%s %d %s %f",b1.name,b1.pages,b1.author,b1.price);
	struct student d1;
	printf("\n   the student's data list :-\n");
	printf("\n enter the student's name =");
	scanf("%s",&d1.name);
	printf("enter the student's rollno=");
	scanf("%d",&d1.rollno);
	printf("enter the student's age =");
	scanf("%d",&d1.age);
	printf("enter the student's total markes =");
	scanf("%f",&d1.totalmarks);
	printf("\n the student's name is = %s\n",d1.name);
	printf("the student's rollno is = %d\n",d1.rollno);
	printf("the student's age is = %d\n",d1.age);
	printf("the student's total marks is = %f\n",d1.totalmarks);
	getch();
}
