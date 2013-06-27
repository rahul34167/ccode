#include<stdio.h>
static int top=-1;
int main()
{
printf("reverse string implementation\n");
strrev();
}
strrev()
{

char s[10];
int i;
printf("enter the string to be reversed\n");
scanf("%s",&s);
top=(sizeof(s)/sizeof(char))-1;

//printf("/n");
for(i=top-2;i>=0;i--)
{
printf("%c",s[i]);
}
printf("\n");
}
