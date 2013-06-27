#include<stdio.h>
#include<stdlib.h>

typedef struct bst 
{
int data;
struct bst *left;
struct bst *right;
}node;
node *root;
node *newnode;
//void insert(node,node);

node *getnode()
{
node *temp;
temp=( node *)malloc(sizeof(node));
temp->left=NULL;
temp->right=NULL;
return temp;
} 
void insert(node *root,node *newnode)
{

if(newnode->data <= root->data)
{
if(root->left==NULL)
root->left=newnode;
else
insert(root->left,newnode);
}
else if(newnode->data>root->data)
{
if(root->right==NULL)
root->right=newnode;
else 
insert(root->right,newnode);
}
}


void preorder(node *p)

{
if(p==NULL)
return;
printf("%d\n",p->data);
preorder(p->left);
preorder(p->right);

}
void inorder(node *p)

{
if(p==NULL)
return;
inorder(p->left);
printf("%d\n",p->data);
inorder(p->right);

}
void postorder(node *p)
{
if(p==NULL)
return;
preorder(p->left);
preorder(p->right);
printf("%d\n",p->data);
}



void main()
{
node *m;
node *getnode();
int ch;
int item;
root=NULL;
printf("enter your choice\n");
scanf("%d",&ch);

while(1)
{
printf(" 1 for insert \n 2 for preorder travesal\n 3 for inorder \n 4 for postorder\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("enter the item to insert\n");
scanf("%d",&item);

newnode=getnode();
newnode->data=item;

if(root==NULL)
{
root=newnode;
root->left=NULL;
root->right=NULL;
m=root;
}

else 
insert(root,newnode);
break;
}

case 2:
{
printf("the preorder traversal is \n");
preorder(root);
printf("\n");
break;
}
case 3:
{
printf("the inorder traversal is \n");
inorder(root);
printf("\n");
break;
}

case 4:
{
printf("the postorder traversal is \n");
postorder(root);
printf("\n");
break;
}

default:
printf("hjhs");
}//switch closed
}//while closed
}//main closed




























