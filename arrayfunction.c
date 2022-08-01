#include<stdio.h>
#include<conio.h>
void display(int *marks);
main()
{
	int marks[4],k;
	for(k=0;k<=3;k++)
	{
	printf("enter the value of k =");
	scanf("%d",&marks[k]);
}
	display(marks);
	getch();
}
void display(int *marks)
{
  int i;
  for(i=0;i<4;i++)
  {
  	printf("the value of this[%d]=%d\n",i,marks[i]);
  }
}
