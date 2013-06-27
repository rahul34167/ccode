#include<stdio.h>
#define size 5

int arr[size];
int front=-1;
int rear=-1;

int main()
{
int choice;
while(1)
{
printf("enter your choice \n 1 for insert \n 2 for delete\n3 for display");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
Delete();
break;
case 3:
display();
break;
default :
printf("wrong choice");
}
}
}
 insert()
{
int item;
if(rear == size-1)
{
printf("overflow condition");
}
else
{
if(front == -1)
front=0;
rear=rear+1;
printf("enter the item to be inserted");
scanf("%d",&item);
arr[rear]=item;
}
}

 Delete()
{

if((front==-1 && rear ==-1) )
{
printf("queue is underflow");
}
else
{
int i;
printf("the deleted item is\n %d",arr[front]);
front=front+1;
}
 }
void display()
{
int j;
for(j=front;j<=rear;j++)
{
printf("%d",arr[j]);
}
}
