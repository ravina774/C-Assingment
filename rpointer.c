//aray of pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	char *a[]={"ravi","ravindra","ravindra singh"};
	printf("*a using u  = %u\n",(*a));
	printf("*a using s = %s\n",(*a));
	printf("*a using c = %c\n",(*a));
	printf("(*(*a)) using c = %c\n",(*(*a)));
//	printf("(*(*a)) using s = %s\n",(*(*a)));
	printf("*a+1=%u\n",*a+1);
	printf("*(a+1) = %s\n",*(a+1));
	printf("*(a+1)+3 = %s\n",*(a+1)+3);
	printf("*a+2 = %u\n",*a+2);
	printf("*(a+2) = %s\n",*(a+2));	
	printf("*(a+2)+8 = %s\n",*(a+2)+8);
//	printf("*a+3=%u\n",*a+3);
	getch();
}
