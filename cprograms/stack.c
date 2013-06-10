
#include<stdio.h>
int main()
{
int a;
int b;
if(&a>&b)
{ printf("the stack is growing downwards\n");
}
else if(&a<&b)
{
printf("the stack is growing upward\n");
}
printf("%d \t %d\n",&a,&b);
return 0;
}
