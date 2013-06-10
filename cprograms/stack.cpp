#include<stdio.h>

using namespace std;

int main()
{
int a;
int b;
if(&a > &b)
{ cout<<"stack is growing downwards\n";
 
}
elseif(&a<&b)
{
cout<<"the stack is growing upward\n";
}
cout<<"%d \t %d\n",&a,&b);
return 0;
}
