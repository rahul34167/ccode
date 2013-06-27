//inserting at end of the circular linked list 

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *link;
}*head;

void insert(item)
{
struct node *var;
var=(struct node *)malloc(sizeof(struct node));
var->data=item;

if(head == NULL)
{
head=var;
var->link=head;
}
else 
{
struct node *temp,*lp;
lp=head;
temp=var;
while(lp->link!=head)
{
lp=lp->link;
}
lp->link=temp;
temp->link=head;
}
}

void display()
{
struct node *current;
current=head;
do
{
printf("%d",current->data);
current=current->link;
}while(current!=head);
}

void main()
{
int ch;
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




