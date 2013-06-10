#include<stdio.h>

int main()
{

char str[10];
char strrev[10];
int i;
int j;
int count=0;
int tempcount;
printf("enter a string\n");
scanf("%s",&str);

for(i=0;str[i]!='\0';i++)
{
count++;
}
//printf("count %d \n",count);

tempcount=count;
printf("count %d \n",tempcount);

for(i=tempcount-1,j=0;i>=0;j++,i--)
{
strrev[j]=str[i];

}

for(j=0;strrev[j]!='\0';j++)
{
printf("%c",strrev[j]);
}
printf("\n");
}
