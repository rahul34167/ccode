
#include<stdio.h>
#define size 5

void push(int);
int main()
{

push(9);
push(4);
push(6);
push(7);
push(5);
push(6);
push(5);
return 0;
}

void push(int data)
{
static int arr[size];
 static int top = -1;

if(top==size-1)
printf("the stack is full");
else 
{
top=top+1;
arr[top]=data;
}
printf("%d\n",arr[top] );
}


