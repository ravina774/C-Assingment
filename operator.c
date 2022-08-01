//all operators in c language
#include<conio.h>
#include<stdio.h>
main()
{
	int a,b,result;
	a=3;
	b=5;
	printf("arithmetic operator %d \n",a+b);
		--a;
				printf("\nincrement operator %d \n",a);
		++b;
				printf(" decrement operator %d \n",b);
					printf("\n relational operator %d \n",a==b);
					printf("relational operator %d \n",a>b);
					printf("relational operator %d \n",a<b);
	            	 	result=(a==b) && (a>b);
							printf("\n logical operator and gate %d \n",result);
						result=(a==b) || (a<b);
							printf("logical operator or gate %d \n",result);
						result= !(a<b);
							printf("logical operator not gate %d \n",result);
								result=(a & b);
									printf("\n btwise operator AND %d \n",result);
								result=(a | b);
									printf("btwise operator OR %d \n",result);
								result=(a ^ b);
									printf("btwise operator ex or %d \n",result);
								result= a<<1;
									printf("btwise operator left shift %d \n",result);
									result= b>>1;
									printf("btwise operator right shift %d \n",result);
										result= a<b?a:b;
											printf("\n conditional operator  %d \n",result);
	getch();		
}
