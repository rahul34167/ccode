#include<stdio.h>
#define max 5

 int front=-1;
 int rear=-1;
 int arr[max];
void insert();
void deletedata();
void display();
 
int main()
{
//int arr[size];
printf("the queue implementation");
insert();
insert();
insert();
insert();
deletedata();
deletedata();
display();
return 0;
}

void insert()
{
int data;
if(rear==max-1)
{
printf("the queue is full and overflow condition");
return ;
}
else 
{
printf("enter the item to insert");
scanf("%d",&data);
front=0;
rear=rear+1;
arr[rear]=data;
printf("the element inserted is %d",arr[rear] );
}
//return;
}
void deletedata()
{
//int arr[size];
if(front==-1 && rear == -1)
{
printf("the overflow condition");
}
else
{
int j = arr[front];
front=front+1;
printf("the element deleted is %d",j);
}

}
void  display()
{
//int arr[size];
int i;
for(i=front;i<=rear;i++ )
{
printf("%d", arr[i]);
}
}
