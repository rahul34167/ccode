//insertion at the beggining of the circular linkedlist
//complexity time O(n)
//space complexity  ?
#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *link;
}*head,*lp;

void insert(item)
{
struct node *var;
var=(struct node *)malloc(sizeof(struct node));
var->data=item;

if(head == NULL)
{
head=var;
var->link=head;
lp=head;
}
else 
{
struct node *temp;
temp=var;
temp->link=head;
head=temp;
lp->link=head;
}
}

void display()
{
struct node *current;
current=head;
do
{
printf("%d\n",current->data);
current=current->link;
}while(current!=lp);
printf("%d\n",lp->data);
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












