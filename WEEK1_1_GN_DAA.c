/*
WEEK1_1_GN_DAA:
Imagine you work for a large logistics company that handles a high volume of
package deliveries on a daily basis. The company's success hinges on ensuring that
packages are delivered to their respective destinations efficiently and on time. To
solve this problem, you create a program that can quickly process and classify
packages based on their destination.*/


#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[20],i,j,temp,n,index,min,order;
	printf("\nEnter number of destinations : ");
	scanf("%d",&n);
	printf("\nEnter Time to reach destination :");
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
			printf("\nTime taken to reach destination after sorting  : ");
			for(i=0;i<n;i++){
			
			printf("%d ",a[i]);
		}
		}
	

