#include<stdio.h>
#include<conio.h>
void swap(int a,int b);
void swaps(int *c,int *b);
void main()
{
	int m=22,n=44;
	printf("value befor the swap m=%d \n and n=%d  ",m,n);
	swap(m,n);
		swaps(&m,&n);
		printf("\n value after swap m=%d \n and n=%d ",m,n);
		
		getch();
}
void swap(int a,int b)
{
	int tamp;
	tamp = a;
	a =b;
	b = tamp;
	printf("\n value after swap m=%d \n and n=%d ",a,b);
}
void swaps(int *a,int *b)
{
	int tamp;
	tamp = *a;
	*a = *b;
	*b = tamp;
//	printf("\n value after swap m=%d \n and n=%d ",*a,*b);
}
