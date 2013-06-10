#include<stdio.h>
int main()
{

char str[50];
char substr[50];
int i,j;
int loc=0;
int lensub=0;
printf("enter a string\n");
scanf("%s",str);

printf("enter a substring to be searched\n");
scanf("%s",&substr);
for(j=0;substr[j]!='\0';j++)
{
lensub++;
}
printf("length of substring is %d\n",lensub);

for(i=0;str[i]!='\0';i++)
{loc++
if(str[i]==substr[0])
{

//printf("location of first character of substring in main string %d\n",loc);

//loc++;
}
}
//printf("location of first character of substring in main string %d",loc);

for(i=loc;i<(loc+lensub);i++)
{
printf("%c",str[i]);
}
return 0;
}
