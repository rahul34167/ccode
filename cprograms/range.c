#include<stdio.h>
#include<math.h>

int main()
{
int x;

printf("enter your choice");
scanf("%d",&x);

switch(x)
{
case 1:
{
char y;
int z;

z=pow(2,(sizeof(char)*8))-1;
printf("the range is 0 to %d",z);

}
}

return 0;
}

