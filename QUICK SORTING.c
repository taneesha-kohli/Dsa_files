#include<stdio.h>            /*QUICK SORTING */

void printarray(int* arr,int n)
{
for(int i=0;i<n;i++)
{
printf(" %d ",arr[i]);
}
}

void quicksort(int arr[],int low,int high)
{
int pivotindex;
if(low<high)
{
pivotindex=partition(arr,low,high);//we call partition function here, which will
                                     //return the index value of pivot
quicksort(arr,low,pivotindex-1); //low will same 0 but now the value of high will
                                //pivotindex-1 mean now we will find pivot
                                 //low to pivotindex-1
quicksort(arr,pivotindex+1,high);
}
}                                

int partition(int arr[],int low,int high)
{
int pivot=arr[low];
int i=low+1;
int j=high;
int temp;
do
{
while(arr[i]<arr[low])
{
i++;
}
while(arr[j]>arr[low])
{
j--;
}
if(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}while(i<j);

temp=arr[j];
arr[j]=arr[low];
arr[low]=temp;
return j;
}

int main()
{
int n;
printf("Enter the size of array :");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
printf("\nEnter the %d element :",i+1);
scanf("%d",&arr[i]);
}
printf("\n\nYour entered array element-------------------------\n\n");

printarray(arr,n);
quicksort(arr,0,n-1);
printf("\n\nArray using quick sort-------------------------\n\n");

printarray(arr,n);
return 0;
}

    