#include<stdio.h>
#define size 10
static int top1=0;
static int top2=size-1;

int arr[size];

void push1()
{
int item;
printf("enter the item to push");
scanf("%d",&item);
if((top1==-1 && top2==0)||(top1==top2))
{
printf("stack overflow");
}
else 
{
//top1=0;
arr[top1]=item;			//insertion at the start of the array as stack 1
++top1;
}
}
void push2()
{
int item;
printf("enter the item");
scanf("%d",&item);
if((top1==size-1)||top1==top2)
{
printf("stack overflow");
}
else 
{
								//insertion at the end of the array as the stack 2
arr[top2]=item;
top2=top2-1;
}
}

void display()
{
int i,j;
printf("the elements of stack 1 are\n");			//displays the element of the stack1
for(i=0;i<top1;i++)
{
printf("%d\n",arr[i]);
}
printf("the elements of stack 2 are\n");

for(j=size-1;j>top2;j--)				//displays the element of the stack 2			
{
printf("%d\n",arr[j]);
}
}

void main()
{

while(1)
{
int ch;
printf("\nenter 1 for stack1\n enter 2 for stack 2\n enter 3 for display");
scanf("%d",&ch);

switch(ch)
{
case 1:
{
push1();
break;
}
case 2:
{
push2();
break;
}
case 3:
{
display();
break;
}
default:
printf("wrong choice");
}
}
}





