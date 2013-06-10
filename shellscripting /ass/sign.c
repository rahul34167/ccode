#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	m=n>>31;
	if(!m)
		printf("POSITIVE");
	else
		printf("NEGATIVE");
}
