/*
WEEK1_2_GN_DAA:
Imagine you are working for a retail store that sells a wide variety of products. The
store has a vast inventory with thousands of items, and it's becoming challenging for
the employees to manage and locate products efficiently. Customers often ask for
specific items, and employees need to find them quickly. The sorting program's
primary goal is to organize the products in the inventory systematically, allowing for
faster and easier access to items when needed.
Implement an efficient sorting algorithm to arrange the products based on product
IDs.*/

//merge sort
#include <stdio.h>

void merge(int a[], int beg, int mid, int end, int ascending) {
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2];

    for (i = 0; i < n1; i++)
        LeftArray[i] = a[beg + i];
    for (j = 0; j < n2; j++)
        RightArray[j] = a[mid + 1 + j];

    i = 0;
    j = 0;
    k = beg;

    if (ascending) {
        while (i < n1 && j < n2) {
            if (LeftArray[i] <= RightArray[j]) {
                a[k] = LeftArray[i];
                i++;
            } else {
                a[k] = RightArray[j];
                j++;
            }
            k++;
        }
    } else {
        while (i < n1 && j < n2) {
            if (LeftArray[i] >= RightArray[j]) {
                a[k] = LeftArray[i];
                i++;
            } else {
                a[k] = RightArray[j];
                j++;
            }
            k++;
        }
    }

    while (i < n1) {
        a[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end, int ascending) {
    if (beg < end) {
        int mid = (beg + end) / 2;

        mergeSort(a, beg, mid, ascending);
        mergeSort(a, mid + 1, end, ascending);

        merge(a, beg, mid, end, ascending);
    }
}

void printArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int n, i, choice;

    printf("Enter the number of products: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the Product IDs:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);

    //printf("Before sorting, Product IDs are:\n");
    //printArray(a, n);

    if (choice == 1) {
        mergeSort(a, 0, n - 1, 1);  // Ascending order
        printf("\nAfter sorting Product ID'S in ascending order:\n");
    } else if (choice == 2) {
        mergeSort(a, 0, n - 1, 0);  // Descending order
        printf("\nAfter sorting Product ID'S in descending order:\n");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    printArray(a, n);

    return 0;
}

