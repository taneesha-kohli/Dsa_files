#include<stdio.h>
//#include<stdlib.h>

/* BINARY SEARCH FOR SEARCHING ELEMENT (2ND METHOD) */
int main()
{
int size,element,mid;
printf("How long array do you want? enter the size of array :");
scanf("%d",&size);

int arr[size],low=0,high=size-1;
printf("\nEnter element in ascending order (smallest to largest) :\n\n");
for(int i=0;i<size;i++)
{
printf("Enter the %d element :",i+1);
scanf("%d",&arr[i]);
}

printf("Enter the element for binary search :");
scanf("%d",&element);

while(low<=high)
{
mid=(low+high)/2;

if(arr[mid]==element)
{
printf("your entered element is founded in index %d",mid);
}
 if(arr[mid]>element)
{
high=mid-1;
}
else
{
low=mid+1;
}
}
return 0;
}  