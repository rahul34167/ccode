#include<stdio.h>

int main()

{
int arr[]={0,6,4,3,3,1,6,1,4};

int size1= (sizeof(arr)/sizeof(int));
//int size2= (sizeof(resarr)/sizeof(int));
int i,j;
int sum = 0;
int resarr[20];
printf("enter a sum check value");
scanf("%d",&sum);


for(i=0,j=0;i<size1-1,j<50;i++,j=j+2)
{
if(arr[i]+arr[i+1]==sum)
{
resarr[j]=arr[i];
resarr[j+1]=arr[i+1];
}
else
{
resarr[j]=0;
resarr[j+1]=0;
}
}
int size2= (sizeof(resarr)/sizeof(int));

for(j=0;j<size2-2;j=j+2)

{
printf("%d\t%d\n",resarr[j],resarr[j+1]);
}

}

