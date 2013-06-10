#include<stdio.h>
int main()
{
float x;
printf("enter a real no\n");
scanf("%f",x);
static int y;
y=(x*10);
int z;
z = (y%10);
if(z>5)
{
y++;
printf("%d",y);
}
else if(z<5)
{
y=y;
printf("%d",y);
}
return 0;
}



