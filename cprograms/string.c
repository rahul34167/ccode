#include<stdio.h>

int main()
{
char s[50];
char news[50];
int i;
int j;
int size1 = (sizeof(s)/sizeof(char));
int size2 = (sizeof(news)/sizeof(char));
printf("enter a string");
scanf("%s",&s);

for(i=0;i<size1;i++)
{

news[i]=s[size1-1];

size1--;

}


for(j=0;j<size2;j++)
{
printf("%c",news[j]);
}

return 0;

}

