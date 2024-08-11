/*
WEEK1_3_GN_DAA::
Imagine you're working for a large online marketplace company that facilitates the
buying and selling of various products. As part of the order processing system, the
company receives thousands of new orders every minute from customers all around
the world. To ensure efficient and timely order fulfillment, the orders need to be
sorted based on various criteria before they can be processed and shipped.
Some customers may request advanced shipping or have urgent requirements.
So, implement an application to arrange the Orders based on priority Number.*/

#include<stdio.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int low,int high,int ascending)
{
    int pivot=arr[high],j;
    int i=(low-1);
    for(j=low;j<=high-1;j++)
    {
    	if (ascending) {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
        
     } else {
     	if (arr[j] > pivot) {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}
void quicksort(int arr[],int low,int high,int ascending)
{
    if(low<high)
    {
        int pi=partition(arr,low,high,ascending);
        quicksort(arr,low,pi-1,ascending);
        quicksort(arr,pi+1,high,ascending);
    }
}
int main()
{
    int n,i,choice;
    printf("\nEnter number of Orders : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter Priority number for each order :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
     printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);

    int ascending = (choice == 1) ? 1 : 0;

    quicksort(arr, 0, n - 1, ascending);

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
