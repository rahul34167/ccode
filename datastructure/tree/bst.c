#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *root=NULL;
static struct node *current1;
static struct node *current2;

void insert(int a)
{
int item;
item=a;
struct node *var;
var=(struct node *)malloc(sizeof(struct node));
//root=(struct node *)malloc(sizeof(struct node));
//current1=(struct node *)malloc(sizeof(struct node));
//current2=(struct node *)malloc(sizeof(struct node));


var->data=item;
if(root==NULL)
{
root=var;
root->left=NULL;
root->right=NULL;
current1=root;
current2=root;
}

else 
{
while(1)
{
 struct node *temp;
temp=var;
if(item <= root->data)
{
if(item <= current1->data)
{
current1->left=temp;
temp->left=NULL;
temp->right=NULL;
current1=current1->left;
}
else 
{
current1->right=temp;
temp->left=NULL;
temp->right=NULL;
current1=current1->right;
}
}
else if(item > root->data)
{
if(item < current2->data)
{
current2->left=temp;
temp->left=NULL;
temp->right=NULL;
current2=current2->left;
}
else 
{
current2->right=temp;
temp->left=NULL;
temp->right=NULL;
current2=current2->right;
}
}
}//whille closed 
}//else closed 
}//fun closed
void main()
{
int ch;
int item;
while(1)
{
printf("enter 1 for insert\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
{
printf("enter the item to insert\n");
scanf("%d",&item);
insert(item);
break;
}
}
}
}
