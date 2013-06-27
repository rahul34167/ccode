#include<stdio.h>
#define size 10
static int top1=-1;
static int top2=-1;
int array[size];
void main()
{
while(1)
{
int choice;
printf("enter\n 1 for push\n 2 for pop\n 3 for display\n 4 for exit");
scanf("%d",&choice);
switch(choice) 
{
case 1:
push();
break;
//case 2:
//pop();
//break;
case 3:
display();
break;
case 4:
printf("wrong choice");
}
}

}

push()
{
int item;
int option;
//int stack1[size];
printf("enter the item");
scanf("%d",&item);

printf("enter 1 to push into stack1 and enter 2 to push into stack 2\n");
scanf("%d",&option);

switch(option)
{
case 1:
{
if(top1==size-1)
{
printf("overflow");
return ;
}
else 
{
top1=0,top2=0;
array[top1]=item;
top2=top1+1;
top1++;
}
}
case 2:
{
if(top2==-1)
{
printf("overflow occured");
return;
}
else 
{
array[top2]=item;
top1=top2+1;
top2++;
}
}
}//switch closed
}//push closed

display()
{
int i;
for(i=0;i<sizeof(array)/sizeof(int);i++)
{
printf("%d",array[i]);
}
}
















