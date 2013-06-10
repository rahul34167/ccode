#include<stdio.h>
void main()
{
int i,j;
int arr[32];
int bit;
int grayarr[32];
printf("enter the no of bits\n");
scanf("%d",&bit);
printf("enter a no into binary");
for(i=0;i<bit;i++)
{
scanf("%d",arr[i]);
}
for(i=0,j=0;i<bit-1,j<bit-1;i++,j++)
{
grayarr[j+1]=(arr[i])^(arr[i+1]);
}
grayarr[0]=arr[0];
printf("%d",grayarr);
for(j=0;j<bit;j++)
{
printf("%d",grayarr[j]);
}
}
