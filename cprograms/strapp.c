#include<stdio.h>
int main()
{

char str1[50];
char str2[50];

int i;
int j;
int length1=0;
int length2=0;

printf("enter the 1st string");
scanf("%s",str1);
printf("enter the second string");
scanf("%s",str2);

//void stringapp()


for(i=0;str1[i]!='\0';i++)
{length1++;
//printf("the length of first string is %d",length1);
}
printf("the length of first string is %d \n",length1);

for(j=0;str2[j]!='\0';j++)
{length2++;
//printf("length of scond string is %d",length2);
}
printf("length of scond string is %d \n",length2);

for(j=0,i=length1;i<length1+length2;i++)
{

str1[i]=str2[j];
j++;}

for( i=0; i<length1+length2;i++)
{
printf("%c",str1[i]);
}
return 0;
}

