
#include<stdio.h>
#include<iostream>
using namespace std;
class matrix
{
public:
static int i;
static int j;
int mat[i][j];
matrix()



matrix(int a , int b)
{
i=a;
j=b;
}
public :
int inputmatrix(int i , int j)
{
for( i=0;i<i-1;i++)
{
for(j=0;j<j-1;j++)
{
cin>>mat[i][j];
}
}
return mat[i][j];
}
int operator +(matrix m2)
{
matrix temp;
temp
for( i=0;i<i-1;i++)
{
for(j=0;j<j-1;j++)
{
temp =m1+m2.mat[i][j];
}
}
return temp;
}
void printmatrix(matrix m3)
{
for(int i=0;i<i-1;i++)
{for(j=0;j<j-1;j++)
{
cout<<mat[i][j];
cout<<"\t";
}
cout<<"\n";
}
}

};
int main()
{
matrix obj1 = matrix();
matrix obj1 = matrix(2,2);
obj1.inputmatrix(2,2);
matrix obj2 = matrix(2,2);
obj2.inputmatrix(2,2);
matrix obj3;
//obj3.matrixsum()
obj3= obj1+obj2;
obj3.matrixsum(obj3);
}

