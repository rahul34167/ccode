#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	printf("MAX = %d\nMIN = %d",b^((a^b)&-(a>b)),a^((a^b)&-(a>b)));
}
