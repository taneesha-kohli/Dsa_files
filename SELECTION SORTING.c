#include<stdio.h>

/* SELECTION SORTING , in this sorting we compares our elements 1 after 1 with
all elements, when we get smallest value so we puts that in 0th index than 1*/
int main()
{ 
int n,smallest,temp;
printf("\nEnter the size of array :");
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++)
{
printf("\nEnter the %d element :",i+1);
scanf("%d",&arr[i]);
}
printf("\n\nYour entered array elements----------------\n\n");
for(int i=0;i<n;i++)
{
printf(" %d ",arr[i]);
}

for(int i=0;i<n-1;i++)
{
smallest=i;  // if the index element is already sort 
for(int j=i+1;j<n;j++)
{
if(arr[smallest]>arr[j])
{
smallest=j; //you will update your smallest element till you gets the 
}     
}           //smallest element in full array 
temp=arr[i];
arr[i]=arr[smallest]; // you will put founded smallest value in 0th index than 1 than 2
arr[smallest]=temp;

}


printf("\n\nSorted elements using Selection sorting method----------------\n\n");
for(int i=0;i<n;i++)
{
printf(" %d ",arr[i]);
}
return 0;
}