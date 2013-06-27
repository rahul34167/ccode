#include<stdio.h>
void display();
int arr[10];
int main()
{
display();
}

void display()
{
int i;

for(i=0;i<5;i++)
{
arr[i]=i;
printf("%d",arr[i]);
}

}
