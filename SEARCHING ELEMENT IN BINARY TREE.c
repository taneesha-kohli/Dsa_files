#include<stdio.h>            /*IMPLEMENTAION OF BINARY TREES*/
#include<stdlib.h>

struct node 
{
struct node *left;
struct node *right;
int middledata;
};
//FUNCTION FOR CREATING A NEWNODE//
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
//PREORDER FUNCTION OF TRAVERSAL IN BINARY TREE//
void Preorder(struct node *root)
{
if(root!=NULL)
{
printf(" %d ",root->middledata);
Preorder(root->left);
Preorder(root->right);
}
}
//INORDER FUNCTION OF TRAVERSAL//
void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->left);
printf(" %d ",root->middledata);
inorder(root->right);
}
}
//POSTORDER FUNCTION OF TRAVERSAL//
void postorder(struct node* root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
printf(" %d ",root->middledata);
}
}

//* SEARCHING ELEMENT IN BINARY TREE*//
void searchel(int search,struct node* root)
{
if(root!=NULL)
{
if(root->middledata==search)
{
printf("\nElement %d is found",root->middledata);
}
searchel(search,root->left);
searchel(search,root->right);

}
}

int main()
{
int search;
struct node *root;
root=createnode();
printf("\nRoot Node is created \n");
root->left=createnode();
printf("\nRoot's left node is created\n");
root->right=createnode();
printf("\nRoot's right node is created\n");
root->left->left=createnode();
printf("\nRoot's left's left node is created\n");
root->left->right=createnode();
printf("\nRoot's left's right node is created\n");
root->right->left=createnode();
printf("\nRoot's right's left node is created\n");
root->right->right=createnode();
printf("\nRoot's right's right node is created\n");
printf("\n\nTrees all elements in preorder are------------------\n\n");

Preorder(root);
printf("\n\nTrees all elements in Inorder--------------------\n\n"); 
inorder(root);
printf("\n\nTrees all elements in postorder-----------------\n\n");
postorder(root);
printf("\nEnter the element which you want to search :");
scanf("%d",&search);
searchel(search,root);
return 0;
} 

     