#include<stdio.h>

/*INSERTION SORTING */
int main()
{ 
int n,insert,j;
printf("\nEnter the size of array :");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
printf("\nEnter the %d element :",i+1);
scanf("%d",&arr[i]);
}
printf("\n\nYour entered array elements are-----------------\n");
for(int i=0;i<n;i++)
{
printf(" %d ",arr[i]);
}
/*insert variable will take the value of i by which we will compare 
 all elements which are before it ,if these will greater
 to this to we will shift those one step ahead , j keep track 
of 1 less index of i j will decrement till j will less to i element*/

for(int i=1;i<n;i++)
{
insert=arr[i]; 
j=i-1;
while(j>=0 && insert<arr[j])
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=insert;
}

printf("\n\nSorted array using Insertion sorting method---------------------\n");
for(int i=0;i<n;i++)                                            
{
printf(" %d ",arr[i]);
}
return 0;
}