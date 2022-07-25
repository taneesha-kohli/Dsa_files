#include<stdio.h>
#include<stdlib.h>

/* QUEUE IMPLEMENTATION USING LINKED LIST*/
struct node
{
int data;
struct node *next;
}*front,*rear; //front is first index of queue and rear is called last index

void enqueue(int element);   //for inserting the elements in the queue
void view(); // to view all element of queue
void dequeue();  //to deleting elements of queue

int main()
{
enqueue(3);
enqueue(4);
enqueue(5);
enqueue(2);
printf("\n\n");
dequeue();
dequeue();
printf("\n\nElement in the queue by using linked are-----------\n\n");
view();


return 0;
}

void enqueue(int element)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nThere is not enough space in the heap");
}
else
{
newnode->data=element;
newnode->next=NULL;
if(front==NULL)
{
front=rear=newnode; //we know front and rear takes same index first 
}                   //front would in same position but rear would increament
              //because all elements or node adds in rear
else
{
rear->next=newnode; // we know rear had the address of first node 
rear=newnode; 
}
}
printf("\n%d is enqueued",element);
}

void dequeue()
{
printf("\n%d is dequeued",front->data);
free(front);
front=front->next;
}

void view()
{
while(front!=NULL)
{
printf("|%d|",front->data);
front=front->next;
}
}
    