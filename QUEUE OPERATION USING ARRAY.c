#include<stdio.h>
//#include<stdlib.h>

/* QUEUE IMPLEMENTATION USING ARRAY */
int queue[10];    // we have created 10 size queue
int front=-1;
int rear=-1;

int isfull(); //we check if top is greater to its maximum range of queue is full 
void enqueue (int element); //for inserting elements in the queue
int isempty(); // we check queue is empty
void dequeue(); // for deleting the queue element 
int getfront(); // to get the front element of queue
int getrear(); // to get the rear(last) element of queue

void viewqueue(); //to view all elements of queue




void enqueue(int element)
{
if(front==-1)
{
front=0;
}
if(isfull())
{
printf("\nqueue is full , element can't be store");
}
else
{
rear++;
queue[rear]=element;
printf("\nenqueued %d\n",element);
}
}

void dequeue()
{
if(isempty())
{
printf("queue is empty , elements can't be delete");
}
else
{
printf("\n%d is deleted",queue[front]);
queue[front]=0;
front=front+1;
}
}
void viewqueue()
{ 
while(front<=rear)
{
printf(" %d ",queue[front]);
front++;
}
}
int isfull()
{
if(rear==9)
{
return 1;
}
else
{
return 0;
}
}

int isempty()
{
if(front==-1&&rear==-1)
{
return 1;

}
else
{
return 0;
}
}

int getfront()
{
return queue[front];
}

int getrear()
{
return queue[rear];
}

int main()
{
isfull();
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
enqueue(6);
enqueue(7);
enqueue(8);
enqueue(9);
enqueue(10);
enqueue(11);
enqueue(12);
isempty();
printf("\n\n");
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
printf("\n\nelement in front :%d",getfront());
printf("\nelement in rear :%d",getrear());
printf("\n\nTotal elements in the queue------------\n\n");
viewqueue();


return 0;
}