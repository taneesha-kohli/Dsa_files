#include<stdio.h>
#include<stdlib.h>

/* STACK IMPLEMENTATION USING LINKED LIST*/
struct node
{
int data;
struct node *next;
}*top;

void push(int element);
void view();
void pop();

int main()
{
push(3);
push(4);
push(5);
push(2);
printf("\n\n");
pop();
pop();
printf("\n\nElement in the stack by using linked are-----------\n\n");
view();


return 0;
}

void push(int element)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nThere is not enough space in the heap");
}
else
{
if(top==NULL)   //IT WILL CREATE A NODE 0TH POSITION WHICH WILL EVER NULL 
{
newnode->data=element;
newnode->next=NULL;
top=newnode;
printf("\n%d is pushed ",element);
}
else
{
newnode->data=element;
newnode->next=top;
top=newnode;
printf("\n%d is pushed",element);
}
}
}


void pop()
{
printf("\n%d is popped",top->data);
free(top);
top=top->next;
}

void view()
{
while(top!=NULL)
{
printf("|%d|",top->data);
top=top->next;
}
}
