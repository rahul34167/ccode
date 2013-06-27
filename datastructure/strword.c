#include<stdio.h>
#include<string.h>
#define size 30
static int top=-1;
static char arr[size];
static char stack[size];

int main()
{

push();
pop();
display();
return 0;
}

push()

{
//char stack[size];
int i=0;
char ch;
char a[size];
printf("enter the string \n");
while((ch=getchar())!='\n')   //read the string word by word 
{
a[i]=ch;
i++;
}
i++;
a[i]='\n';

//for(i=0;i<sizeof(a)/sizeof(char);i++)
//printf("%s\n",a);
if(top== size-1)
{
printf("overflow occured");
}

else
{
top=0;
for(i=top;i<sizeof(a)/sizeof(char);i++)
{
stack[i]=a[i];
//printf("%c",stack[i]);  //push the string element into stack
}
}
printf("\n");
}

pop()
{
int i;
//char arr[size];
if(top==-1)
{
printf("underflow condition");
}

else 
{
int j=0;
for(i=sizeof(stack)/sizeof(char)-2;i>=0;i--)
{
arr[j]=stack[i];
//printf("%c",arr[j]);
j++;
}
//printf("\n");
}
}
display()
{
int i;
for(i=0;i<sizeof(arr)/sizeof(char);i++)
{
printf("%c",arr[i]);
}
}
