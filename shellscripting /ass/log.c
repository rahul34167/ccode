#include<stdio.h>
int main ()
{
	int n,count=-1;
	scanf("%d",&n);
	if(n>0){
		for(;n>0;n=n/10)count++;
		printf("%d",count);}
	else
		printf("INVALID");
}
