#include<stdio.h>
#define size 10

static int arr[size];
static int front=-1;
static int rear=-1;

int main()
{
int choice;
while(1)
{
printf("enter your choice \n 1 for insert \n 2 for delete\n3 for display\n");
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
printf("enter the item to insert\n");
scanf("%d",&item);
if((front ==0 && rear==size-1) || (front==rear+1) )
{
printf("overflow occurs");
}
else if(rear<size-1)
{
if(front==-1)
front=0;
rear=rear+1;
arr[rear]=item;
}
else if(rear==size-1)
{
arr[rear]=item;
rear=rear+1;
}
else if(rear>size-1 && front > 0)
{
rear=(rear%10);
arr[rear]=item;
rear=rear+1;
}
}

 Delete()
{

if((front==-1 && rear ==-1) )
{
printf("\nqueue is underflow\n");
return;
}
else
{
int i;
printf("the deleted item is\n %d",arr[front]);
front=front+1;
}
 }
 display()
{
int j;
int i;
if(front<=rear)
{
for(j=front;j<=rear;j++)
printf("%d",arr[j]);
}
else if(front>rear)
{
for(i=front;i<size-1;i++)
printf("%d",arr[i]);
for(j=rear;j<front;j++)
printf("%d",arr[j]);
}
}

