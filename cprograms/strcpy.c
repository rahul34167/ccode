#include<stdio.h>
int main()
{
char str[50];
char str1[50];
int i=0;
int length;

printf("jkjskjk");
printf("enter the length of string");
scanf("%d",&length);
//while(str[i]!='\0')
for(i=0;i<length;i++)
{
scanf("%c",&str[i]);
//getc(str[i]);
}
//while(str[i]!='\0')
for(int i=0;i<length;i++)
{
str1[i]=str[i];
//i++;
}
printf("\t \n");
//while(str[i]!='\0')
//for(int i=0;i<"\0";i++)
for(int i=0;i<length;i++)
{
printf("%c",str1[i]);
i++;}
return 0;
}


