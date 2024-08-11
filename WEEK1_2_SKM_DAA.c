/*WEEK1_2_SKM_DAA:
Courier and logistics companies handle a massive volume of packages daily. These
packages need to be efficiently sorted and routed to their destinations to ensure
timely and accurate deliveries. Each package typically has a unique barcode that
contains essential information like the recipient's address, delivery method, and
tracking number. So, implement an application to arrange the packages based on
tracking numbers.*/

//Insertion Sort
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[20],i,j,temp,n,key,k,choice;
	printf("Enter number of Packages to reach destination : ");
	scanf("%d",&n);
	printf("Enter Tracking numbers for each package : ");
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
	
	
	
	
	
	printf("Sorted the packages based on tracking numbers :");
	for(i=0;i<n;i++){
		printf(" %3d",a[i]);
		
	}
	
	printf("\n");
	return 0;
	
}
