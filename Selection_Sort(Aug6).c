//Selection Sort
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[20],i,j,temp,n,index,min;
	printf("Enter number of elements you want to input : ");
	scanf("%d",&n);
	printf("Enter numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++){
		min=a[i];
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min) //descending order logic= if(a[j]>min)
			{
				min=a[j];
				index=j;
		}
	}
	if(index!=i)
	{
		temp=a[i];
		a[i]=a[index];
		a[index]=temp;
	}
			}
			printf("Values after selection sort : ");
			for(i=0;i<n;i++){
			
			printf("%d ",a[i]);
		}
		}
	
