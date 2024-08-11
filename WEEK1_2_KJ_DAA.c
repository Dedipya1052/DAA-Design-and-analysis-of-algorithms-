/*   WEEK1_2_KJ_DAA:
Imagine you are working for a retail store that sells a wide variety of products. The
store has a vast inventory with thousands of items, and it's becoming challenging for
the employees to manage and locate products efficiently. Customers often ask for
specific items, and employees need to find them quickly. The sorting program's
primary goal is to organize the products in the inventory systematically, allowing for
faster and easier access to items when needed.
Implement an efficient sorting algorithm to arrange the products based on product
IDs.*/

//selectionsort
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[20],i,j,temp,n,index,min,order;
	printf("\nEnter number of Products : ");
	scanf("%d",&n);
	printf("\nEnter ID for each product :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nChoose sorting order: \n 1. Ascending \n 2. Descending : ");
	scanf("%d",&order);
	for (i=0;i<n-1;i++){
		min=a[i];
		index=i;
		for(j=i+1;j<n;j++)
		{  
		  if(order==1){
			if(a[j]<min) //descending order logic= if(a[j]>min)
			{
				min=a[j];
				index=j;
		}
	}
	else if(order==2){
		if(a[j]>min) //descending order logic= if(a[j]>min)
			{
				min=a[j];
				index=j;
		}
	}
	}
	if(index!=i)
	{
		temp=a[i];
		a[i]=a[index];
		a[index]=temp;
	}
			}
			printf("\nSorted products based on ID'S  : ");
			for(i=0;i<n;i++){
			
			printf("%d ",a[i]);
		}
		}
	

