#include<stdio.h>
int main()
{
int arr[] = { 1,0,0,1,0,0,1};
int temp;
int i;
int size = sizeof(arr)/sizeof(int);
int *index;
index = &arr;
for(i=0;i<size;i++)
{
if(*(index)==1 && *(index+1)==0)
{
temp=arr[i+1];
arr[i+1]=arr[i];
arr[i]=temp;

index++;
}
else if(*(index)==1 && *(index + 1)==1 && *(index + 2)==0)
{
arr[i+1]=arr[i+2];
index=index;
}
}
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
}
return 0;
}
