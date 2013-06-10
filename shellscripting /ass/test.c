#include<stdio.h>
int main()
{
	int val;
	scanf("%d",&val);
	printf("%d",val&val-1);
	if(!(val&val-1))
		printf("Power of Two");
}
