//insertion at the given location 


#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*head;
//static struct node *head;



void insert(int item,int loc)
{
struct node *current,*temp;
int k=1;
struct node *var;
var=(struct node *)malloc(sizeof(struct node));
var->data=item;

if(head==NULL)
{

var->next=NULL;
head=var;
}
else
{
current=head;
while(current->next!=NULL && k != loc)
{
current=current->next;
++k;
}

if(k==loc)				//if loc found then inserts at given loc 
{
struct node *ima;			//imaginary pointer
ima=current->next;
temp=var;
current->next=temp;
temp->next=ima;
}
else
{
var->next=head;			//insert at the begging of the list if location not found 
head=var;
}
}
}

void display()
{
struct node *current1;
current1=head;
while(current1->next!=NULL)
{
printf("\n%d\n",current1->data);
current1=current1->next;
}
if(current1->next==NULL)
printf("%d\n",current1->data);
}

void main()
{

static struct node *head=NULL;
int ch;
int item;
int loc;
while(1)
{
printf("1 for insert\n 2 for display");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("enter the item to insert and its location");
scanf("%d %d",&item,&loc);
insert(item,loc);
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

















