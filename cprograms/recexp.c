#include<stdio.h>
 int exprec(int , int);
int main()
{

int b=0;
int e=0;
printf("enter the base and exponent\n");
scanf("%d \n %d",&b,&e);
//int exprec(int , int);
int result=0;
result=exprec(b,e);

 int exprec(int m,int n)
{
if(n==0)
{
return 1;
}
else
{
result = m*exprec(m,n-1);
return result;
}
}

printf("%d",result);
return 0;
}
