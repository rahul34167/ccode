#include<stdio.h>

//int push(int);
int main()
{
int sarr[10];
int top=0;
static int push(int);
push(10);
printf("%d",sarr[top]);
int push(int data)
{
if(top == -1)
{
return -1;
}
else
{
sarr[top]=data;
top++;
}
return sarr[top];
}
return 0;

}
