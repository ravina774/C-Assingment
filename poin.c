#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,*q,*p1,a[10];
	char b[]="ravi",*p2;
	p2 ="ravina";
	p=a+2;
	q=a+8;
 	printf("\n \n "); 	 
	printf("value of  p+2 = %d\n",p);  
	printf("value of  q+8 = %d\n",q); 	
	printf("value of  p=q = %d\n",q-p+1); 
	printf("value of  p=q = %d\n",(q-p+1)); 
	printf("value of  b[1] = %s\n",b[1]);	
	getch();
}
/*	int a[5]={9,10,30,1,6},*p;
	p=a;//expliat pointer
	//p=&a[0]; 
	printf("a = %d\n",a);
	printf(" &a= %u\n",&a);
	printf("a+1  = %d\n",a+1);
	printf("&a[1] = %u\n",&a[1]);
	printf("a+2 = %d\n",a+2);
	printf("*(a+2) = %u\n",*(a+2));
	printf("a[2] = %d\n",a[2]);
	printf("2[a] = %d\n",2[a]);
	printf("&2[a]= %u\n",&2[a]);
	printf("1+a = %d\n",1+a);
	printf("&(*(a+2)) = %u\n",&(*(a+2)));
//	printf("(*(a+2)) = %u\n",*(&a+2));
	printf("&(2[a]) = %u\n",&(2[a]));
	
	printf("\n \n ");
	printf("value of p = %d\n",p); 
	printf("value of a = %d\n",a); 
	printf("value of *p = %d\n",*p); 
	printf("value of *a = %d\n",*a); 
	 printf("value of p+3 = %d\n",p+3); 
	printf("value of a+3 = %d\n",a+3  ); 
	printf("value of p = %d\n",p); 
	printf("value of a = %d\n",a); 
