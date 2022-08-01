#include<stdio.h>
#include<conio.h>
#define NULL 0
struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node; //node type define
void main()
{
	node * head;
	void create(node *p);
	int count(node *p);
	void print(node *p);
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	printf("\n number of items = %d \n",count(head));
	getch();
}
void create(node *list)
{

	printf("input a number \n");
	printf("type -999 at end :- ");
	scanf("%d",&list->number);//create current node
	if(list->number==-999)
	{
		list->next = NULL;
	}
	else
	{
		list->next=(node*)malloc(sizeof(node));
		create(list->next);//recursion occurs
	}
	return;
}
void print(node *list)
{
	if(list->next!=NULL)
	{
		printf("%d-->",list->number);//print current item
		if(list->next->next==NULL)
		{
			printf("%d",list->next->number);
		}
		print(list->next);
	}
	return;
}
int count(node *list)
{
	if(list->next==NULL)
	{
		return 0;
	}
	else
	{
		return(1+count(list->next));
	}
}
