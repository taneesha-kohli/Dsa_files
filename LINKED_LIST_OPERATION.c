#include<stdio.h>
#include<stdlib.h>

void create_link_list();
void insert_element_beginning();
void insert_element_end();
void insert_element_middle();
void delete_element_beginning();
void delete_element_end();
void delete_element_middle();

struct node
{
int data;
struct node *next;
};

int main()
{
int enter;
printf("                   MENU :");
printf("\n\n       (1) : CREATE LINK LIST");
printf("\n       (2) : INSERT ELEMENT IN BEGINNING");
printf("\n       (3) : INSERT ELEMENT IN END");
printf("\n       (4) : INSERT ELEMENT IN MIDDLE");
printf("\n       (5) : DELETE ELEMENT IN BEGINNIG");
printf("\n       (6) : DELETE ELEMENT IN END");
printf("\n       (7) : DELETE ELEMENT IN MIDDLE");
printf("\n\nEnter your choice :");
scanf("%d",&enter);

switch(enter)
{
case 1:
create_link_list();
break;
case 2:
 insert_element_beginning();
break;
case 3:
 insert_element_end();
break;
case 4:
 insert_element_middle();
break;
case 5:
delete_element_beginning();
break;
case 6:
 delete_element_end();
break;
case 7:
 delete_element_middle();
break;
}
    return 0;
}

void create_link_list()
{
int n,el,enter;
struct node *head,*temp,*newnode;
head=(struct head*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("How many elements do you want to store? :");
scanf("%d",&n);
printf("Enter the 1 element :");
scanf("%d",&el);
head->data=el;
head->next=NULL;
temp=head;
}
for(int i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("Enter the %d element :",i);
scanf("%d",&el);
newnode->data=el;
newnode->next=NULL;
temp->next=newnode;
temp=newnode;
}
}

temp=head;
while(temp!=NULL)
{
printf(" %d ",temp->data);
temp=temp->next;
}
}
void insert_element_beginning()
{
int n,el,enter;
struct node *head,*temp,*newnode,*beginning;
head=(struct head*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("How many elements do you want to store? :");
scanf("%d",&n);
printf("Enter the 1 element :");
scanf("%d",&el);
head->data=el;
head->next=NULL;
temp=head;
}
for(int i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("Enter the %d element :",i);
scanf("%d",&el);
newnode->data=el;
newnode->next=NULL;
temp->next=newnode;
temp=newnode;
}
}
beginning=(struct node*)malloc(sizeof(struct node));
if(beginning==NULL)
{
printf("Not enough space ");
}
else
{
printf("Enter the element which you want to store in the beginning :");
scanf("%d",&enter);
temp=head;
beginning->data=enter;
beginning->next=temp;


}
temp=beginning;
while(temp!=NULL)
{
printf(" %d ",temp->data);
temp=temp->next;
}
}

void insert_element_end()
{
int n,el,enter;
struct node *head,*temp,*newnode,*end;
head=(struct head*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("How many elements do you want to store? :");
scanf("%d",&n);
printf("Enter the 1 element :");
scanf("%d",&el);
head->data=el;
head->next=NULL;
temp=head;
}
for(int i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("Enter the %d element :",i);
scanf("%d",&el);
newnode->data=el;
newnode->next=NULL;
temp->next=newnode;
temp=newnode;
}
}
end=(struct node*)malloc(sizeof(struct node));
if(end==NULL)
{
printf("Not enough space");
}
else
{
temp=head;
printf("Enter the element which you want to store in end :");
scanf("%d",&enter);
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=end;
end->data=enter;
end->next=NULL;
}
temp=head;
while(temp!=NULL)
{
printf(" %d ",temp->data);
temp=temp->next;
}
}

void insert_element_middle()
{
int n,el,enter,position;
struct node *head,*temp,*newnode,*middle;
head=(struct head*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("How many elements do you want to store? :");
scanf("%d",&n);
printf("Enter the 1 element :");
scanf("%d",&el);
head->data=el;
head->next=NULL;
temp=head;
}
for(int i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("Enter the %d element :",i);
scanf("%d",&el);
newnode->data=el;
newnode->next=NULL;
temp->next=newnode;
temp=newnode;
}
}
middle=(struct node*)malloc(sizeof(struct node));
if(middle==NULL)
{
printf("Not enough space");
}
else
{
temp=head;
printf("Enter the position where you want to store the element :");
scanf("%d",&position);
printf("Enter the element which you want to store in the middle :");
scanf("%d",&enter);
for(int i=1;i<=position-2;i++)
{
temp=temp->next;
}
middle->data=enter;
middle->next=temp->next;
temp->next=middle;

}
temp=head;
while(temp!=NULL)
{
printf(" %d ",temp->data);
temp=temp->next;
}
}

void delete_element_beginning()
{
int n,el,enter,position;
struct node *head,*temp,*newnode,*delete_begin;
head=(struct head*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("How many elements do you want to store? :");
scanf("%d",&n);
printf("Enter the 1 element :");
scanf("%d",&el);
head->data=el;
head->next=NULL;
temp=head;
}
for(int i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("Enter the %d element :",i);
scanf("%d",&el);
newnode->data=el;
newnode->next=NULL;
temp->next=newnode;
temp=newnode;
}
}
delete_begin=(struct node*)malloc(sizeof(struct node));
if(delete_begin==NULL)
{
printf("Not enough space");
}
else
{
temp=head;
head=head->next;
free(temp);
}
temp=head;
while(temp!=NULL)
{
printf(" %d ",temp->data);
temp=temp->next;
}
}

void delete_element_end()
{
int n,el,enter,position;
struct node *head,*temp,*newnode,*last;
head=(struct head*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("How many elements do you want to store? :");
scanf("%d",&n);
printf("Enter the 1 element :");
scanf("%d",&el);
head->data=el;
head->next=NULL;
temp=head;
}
for(int i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("Enter the %d element :",i);
scanf("%d",&el);
newnode->data=el;
newnode->next=NULL;
temp->next=newnode;
temp=newnode;
}
}
temp=head;
while(temp->next!=NULL)
{
last=temp;
temp=temp->next;
}
last->next=NULL;
free(temp);
temp=head;
while(temp!=NULL)
{
printf(" %d ",temp->data);
temp=temp->next;
}
}

void delete_element_middle()
{
int n,el,enter,position;
struct node *head,*temp,*newnode;
head=(struct head*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("How many elements do you want to store? :");
scanf("%d",&n);
printf("Enter the 1 element :");
scanf("%d",&el);
head->data=el;
head->next=NULL;
temp=head;
}
for(int i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
printf("Not enough space in the heap");
}
else
{
printf("Enter the %d element :",i);
scanf("%d",&el);
newnode->data=el;
newnode->next=NULL;
temp->next=newnode;
temp=newnode;
}
}
temp=head;
printf("Enter the position to delete that element :");
scanf("%d",&position);
for(int i=1;i<=position-2;i++)
{
temp=temp->next;
}
temp->next=temp->next->next;
free(temp);
temp=head;
while(temp!=NULL)
{
printf(" %d ",temp->data);
temp=temp->next;
}
}

    