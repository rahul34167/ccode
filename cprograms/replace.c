#include<stdio.h>

int main()
{

char arr[50];
int i;
int loc=0;
int size = sizeof(arr)/sizeof(char);
int x=0;
int j;
printf("enter a string having more than one word");
scanf("%s",&arr);

for(i=0;i<size;i++)
{
if(arr[i]=='')
{
loc = x;
}
else
x=loc++;
}


for(j=loc;j<size;j++)
{
printf("%c",arr[j]);
}
for(j=0;j<loc;j++)
{printf("%c",arr[j]);
}

return 0;
}
