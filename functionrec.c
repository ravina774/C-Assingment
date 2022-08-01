#include<stdio.h>
#include<conio.h>
int rec(int a);
main()
{
  rec(3);//or int a=6;
	getch();//or rec(a);
}
 int rec(int a)
 {
    printf("%d \n",a);
 if(a>=1)
   {
    rec(a-1);
    printf(" %d\n",a);
	}
}
