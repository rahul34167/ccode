#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	x = x | (x >> 1);
	x = x | (x >> 2);
	x = x | (x >> 4);
	x = x | (x >> 8);
	x = x | (x >>16);
	x = x | (x >>32);
	printf("%d",x - (x >> 1));
}


