#include<stdio.h>

int main()
{
char str[50];

printf("enter a string");
scanf("%s",&str);
int i;


for(i=0;str[i]!='\0';i++)
{
if(str[i] >=97 && str[i] <=122)

str[i]=str[i]-32;
}
//else if(str[i])
//str[i]=str[i];
//}

for(i=0;str[i]!='\0';i++)
{
printf("%c",str[i]);
}
return 0;
}
