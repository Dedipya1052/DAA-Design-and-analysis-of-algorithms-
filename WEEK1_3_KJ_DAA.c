/*      WEEK1_3_KJ_DAA:
Imagine you're working for a large online marketplace company that facilitates the
buying and selling of various products. As part of the order processing system, the
company receives thousands of new orders every minute from customers all around
the world. To ensure efficient and timely order fulfillment, the orders need to be
sorted based on various criteria before they can be processed and shipped.
Some customers may request advanced shipping or have urgent requirements.
So, implement an application to arrange the Orders based on priority Number.*/
#include <stdio.h>

//Insertion Sort
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[20],i,j,temp,n,key,k,choice;
	printf("Enter number of Orders : ");
	scanf("%d",&n);
	printf("Enter Priority number for each order : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
	for(k=1;k<n;k++)
	{
		key=a[k];
		j=k-1;
		
		if(choice==1){
		while(key<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		
	} else if (choice==2) {
            // Sort in descending order
            while (j >= 0 && key > a[j]) {
                a[j + 1] = a[j];
                j = j - 1;
            }
        } else {
            printf("Invalid option. Sorting in ascending order by default.\n");
            while (j >= 0 && key < a[j]) {
                a[j + 1] = a[j];
                j = j - 1;
            }
        }
        a[j + 1] = key;
    }
	
	printf("\nSorted the Orders based on priority Number :");
	for(i=0;i<n;i++){
		printf(" %3d",a[i]);
		
	}
	
	printf("\n");
	return 0;
	
}
