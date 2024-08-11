//Bubble Sort
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[20],i,j,temp,n;
	printf("Enter number of elements you want to input : ");
	scanf("%d",&n);
	printf("Enter numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Values after Bubble sort : ");
			for(i=0;i<n;i++){
			
			printf("%d ",a[i]);
		}
	
}
