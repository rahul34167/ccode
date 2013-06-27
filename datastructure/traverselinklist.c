:
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
}; 
struct node *head=NULL;
void insert(int item)
{
struct node *temp,*first;
//first = (struct node*)malloc(sizeof(struct node));

if(head==NULL)
{
first = (struct node*)malloc(sizeof(struct node));//inserted as first node
first->data=item;
first->link=NULL;
head=first;
}
else 
{
temp=(struct node *)malloc(sizeof(struct node *));				//inserted at the beggining  
temp->data=item;
temp->link=head;
head=temp;
}

}

void display(struct node *r)
{
r=head;
while((r->link)!=NULL)
{
printf("%d\n",r->data);
r=r->link;
}
if(r->link==NULL)
{
printf("%d",r->data);
}
}

void main()
{
struct node *n;
//static struct node *head=NULL;
insert(11);
insert(13);
insert(16);
display(n);
}
