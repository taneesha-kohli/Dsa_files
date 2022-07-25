#include<stdio.h>            /*IMPLEMENTAION OF BINARY TREES*/
#include<stdlib.h>

struct node 
{
struct node *left;
struct node *right;
int middledata;
};

struct node* createnode()  
{
int n;
struct node *newnode;
printf("\nEnter the element which you want to store :");
scanf("%d",&n);
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nNot enough space in the heap,memory can't be allocate\n");
}
else
{
newnode->left=NULL;
newnode->middledata=n;
newnode->right=NULL;
}
return newnode;
}

void nodeElement(struct node *root)
{
printf(" \nElement on root              : %d",root->middledata);
printf(" \nElement on root's left node  : %d",root->left->middledata);
printf(" \nElement on root's right node : %d",root->right->middledata);

}


int main()
{
struct node *root;
root=createnode();
printf("\nRoot Node is created \n");
root->left=createnode();
printf("\nRoot's left node is created\n");
root->right=createnode();
printf("\nRoot's right node is created\n");

nodeElement(root);
return 0;
} 

     