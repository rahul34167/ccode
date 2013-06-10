#include<stdio.h>
int main()
{
	int val,count=0;
	printf("Enter the value : ");
	scanf("%d",&val);
	if(!(val & val-1))
	{
		val--;
		while(val!=0)
		{
			val = val & val-1;
			count++ ;
		}
		if(!(count&1))
			printf("Power of 4");
		else
			printf("Power of 2 but not 4");
	}
	else
		printf("Power neither of 4 nor 2");
}
