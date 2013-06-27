#include<stdio.h>
#include<stdlib.h>

struct node 
{
struct node *previous;//for the address of pevious node 
int data;
struct node *next;//for the address of the next node 
}*head,*last;//two pointers to point to first node and last node


void insert(int item)
{
struct node *var;
var=(struct node *)malloc(sizeof(struct node));
var->data=item;
if(head == NULL)
{
head=var;
var->next=NULL;
var->previous=NULL;
last=head;
}
else 
{
struct node *temp;
temp=var;
temp->next=head;
head->previous=temp;
temp->previous=NULL;
head=temp;
}
}
void display()
{
struct node *d;
d=head;
while(d!=NULL)
{
printf("%d",d->data);
d=d->next;
}
printf("\n");
}

void main()
{
int ch;
head=NULL;
int item;
while(1)
{
printf("1 for insert\n 2 for display");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("enter the item to inset");
scanf("%d",&item);
insert(item);
break;
}
case 2:
{
display();
break;
}
default :
printf("wrong choice ");
}
}
}










