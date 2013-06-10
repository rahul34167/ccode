#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int mask=a>>31;
	printf("abs value of given number is %d",(mask+a)^mask);
}
