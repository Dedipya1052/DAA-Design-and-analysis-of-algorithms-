/*WEEK1_3_SKM_DAA:
Imagine you are working for a large online marketplace like Amazon or eBay. One
of the critical functionalities of such platforms is to display products to customers in
a way that is relevant, helpful, and easy to navigate. Customers can browse through
thousands or even millions of products, and Many users prefer to see products sorted
by price, either in ascending or descending order. This allows them to find the
cheapest or most expensive products within their budget. So, implement an
application to arrange the products based on price.*/

//Bubble Sort
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[20],i,j,temp,n,choice;
	printf("Enter number of Products : ");
	scanf("%d",&n);
	printf("\nEnter Product prices : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
		
	for(i=n-1;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
		if(choice==1){
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		else if(choice==2){
			
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
            } else {
                printf("Invalid choice. Sorting in ascending order by default.\n");
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

	printf("\nSort the products based on price : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

