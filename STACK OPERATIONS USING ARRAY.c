#include<stdio.h>
//#include<stdlib.h>

/* STACK IMPLEMENTATION */

int stack[10];
int top=-1;

void push (int element); //for inserting elements in the stack
void pop(); // for deleting the stack element 
void stackelement(); //to view all elements of stack
int isfull(); //we check if top is greater to its maximum range of stack is full 
int isempty(); // we check stack is empty
int view (); // to view top element of stack

void push(int element)
{
if(isfull())
{
printf("Stack is full, now element can't push");

}
else
{
top++;
stack[top]=element;
printf("\n%d is pushed into the stack\n",stack[top]);
}
}
void pop()
{
if(isempty())
{
printf("\nStack is empty, element can't pop");
}
else
{
printf("\n\n%d is popped",stack[top]);
stack[top]=0;
top--;
}
}

void stackelement()
{ 

printf(" %d ",stack[top]);
top--;
}
int isfull()
{
if(stack[top]==9)
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
if(top==-1)
{
return 1;
}
else
{
return 0;
}
}
int view()
{

printf("\n\nTop element is:%d\n\n ",stack[top]);

}

int main()
{
push(3);
push(2);
push(4);
push(1);
push(6);
push(9);
push(8);
push(10);
push(11);
push(63);
pop();
pop();
pop();
pop();
pop();
pop();
pop();
pop();
pop();
pop();

view();
printf("\nStack total elements are:----------\n");
stackelement();
stackelement();
isfull();
isempty();
return 0;
}  