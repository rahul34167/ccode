#include<stdio.h>
#include<stdlib.h>

void push();
//void pop();
void display();


struct node
{
int data;
struct node *link;
}; 
static struct node *n;
static struct node *top=NULL;
void push(int item)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
if(top==NULL)
{
temp->data=item;
temp->link=NULL;
top=temp;
n=top;
}
else 
{
temp->data=item;
temp->link=NULL;
top->link=temp;
top=temp;
}
}

void display(struct node *r)
{
while((r->link)!=NULL)
{
printf("%d",r->data);
r=r->link;
}
}
void main()
{
struct node *n;
int ch;

while(1)
{

printf("1 for push\n 2 for pop \n 3 for display\n");

printf("enter your choice\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
{
int item;
printf("enter the item to push");
scanf("%d",&item);
push(item);
break;
}
//case 2:
//{
//pop();
//break;
//}
case 3:
{
display(n);
break;
}
default :
printf("wrong choice");

}//switch closed 
}//while closed
}//main closed 



