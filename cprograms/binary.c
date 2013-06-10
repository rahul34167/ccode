#include<stdio.h>

int main()
{

int x;
//int binarr[32];
//int i;
//int y;
printf("enter a positive integer");
scanf("%d",x);

//if(x>0)
do
{
//for(i=0;i<32;i++)

int y=x%2;
x=x/2;
printf("%d\n",y);
}while(x>0);
return 0;
}
