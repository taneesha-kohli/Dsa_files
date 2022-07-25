#include<stdio.h>
/*bubble short , in this sorting method we sets large element in last index 
one after one*/

int main()
{ 
int n,temp;
printf("\nEnter the size of array :");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++)
{
printf("\nEnter the %d element :",i+1); 
scanf("%d",&arr[i]);
}
printf("\nYour entered array elements are -------------------\n");
for(int i=0;i<n;i++)
{
printf(" %d ",arr[i]);
}

// we will see how to perform bubble sorting method//

for(int i=0;i<n-1;i++)
{
for(int j=0;j<(n-1)-i;j++) //every time we decrement this loop by 1 
{                       //because every time last shorted element didn't compare         

if(arr[j]>arr[j+1])
{
temp=arr[j+1]; // if we will get max value in oth index so we will swap it in the 
arr[j+1]=arr[j]; // place of that element which is smallest than it
arr[j]=temp; // we will push large element near to last index by swapping 
}

}
}
printf("\n\nSorted array using bubble sorting------------------\n");
for(int i=0;i<n;i++)
{
printf(" %d ",arr[i]);
}
return 0;
}