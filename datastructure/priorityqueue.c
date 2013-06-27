#include<stdio.h>
#define size 5
int arr[size];
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
static int i=0;
int item;
printf("enter the element to insert");
scanf("%d",&item);
if((front==0&&rear==size-1))
{
printf("overflow occured");
}
else if(rear==-1 && front ==-1)
{
front=0;
rear=0;               //insert as first element with given priority
arr[rear]=item;
rear++;
}
else
{
int j;
//front=0;
for(i=0;i<rear;i++)
{
if(item>arr[i])
for(j=rear;j>i;j--)
arr[j]=arr[j-1];
}
arr[front]=item;
}
rear=rear+1;
}

 Delete()
{
int i,j;
int data;
printf("enter the item to delete\n");
scanf("%d",&data);
for(i=front;i<=rear;i++)
{
if(arr[i]==data)
{
int j= arr[i];
for(j=i;j<=rear;j++)
arr[j]=arr[j+1];
}

}
}
 display()
{

for(;front<rear;front++)
printf("%d\n",arr[front]);
front=0;
}





