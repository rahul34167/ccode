# include <stdio.h>
unsigned int factorial(int);
void main()
{
unsigned int f;
int a,i,g=0,c=1,j=-1;
//clrscr();
scanf("%d",&a);
printf("sine series up to %d terms",a);
for(i=1;i<a;i++)
{
f=factorial(c);
j=j*(-1);
printf(" [(%d(x^%d))/(%d)] ",j,g,f);
if(i!=a)
printf("+");
c=c+2;
g=g+2;
}
}
unsigned int factorial(int x)
{
int fact=1,i;
for(i=1;i<=x;i++)
fact=fact*i;
return fact;

}
