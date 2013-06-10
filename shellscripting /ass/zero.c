#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
        if(!(x & 0x000000ff) ) printf("Right Most\n");
        if(!(x & 0x0000ff00) ) printf("2nd Right Most\n");
        if(!(x & 0x00ff0000) ) printf("2nd Left Most\n");
	if(!(x & 0xff000000) ) printf("Left Most\n");
}
