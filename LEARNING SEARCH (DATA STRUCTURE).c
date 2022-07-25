#include<stdio.h>
//#include<stdlib.h>
int main()
{
int size,element,found,notfound=0;
printf("How long array do you want? enter the size of array :");
scanf("%d",&size);

int arr[size];

for(int i=0;i<size;i++)
{
printf("Enter the %d element :",i+1);
scanf("%d",&arr[i]);
}
printf("Your entered array elements are : --------\n\n");
for(int i=0;i<size;i++)
{
printf("|%d|",arr[i]);
}
printf("\n\nEnter the element which you want to search :");
scanf("%d",&element);

for(int i=0;i<size;i++)
{
if(element==arr[i])
{
found=i;    
}
else
{
notfound++;
}
}
if(notfound==size)
{
printf("Your entered element isn't founded");
}
else
{
printf("Your entered element is founded in index %d",found);
}
return 0;
}  