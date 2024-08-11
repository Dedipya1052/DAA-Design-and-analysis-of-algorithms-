/*  
WEEK1_1_KJ_DAA:
Imagine you work for a large logistics company that handles a high volume of
package deliveries on a daily basis. The company's success hinges on ensuring that
packages are delivered to their respective destinations efficiently and on time. To
solve this problem, you create a program that can quickly process and classify
packages based on their destination.  */

//Quick sort
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
    printf("\nEnter number of Packages : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter Destination time for each package :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
     printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);

    int ascending = (choice == 1) ? 1 : 0;

    quicksort(arr, 0, n - 1, ascending);

    printf("\nSorted packages based on their Destination Time :");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
