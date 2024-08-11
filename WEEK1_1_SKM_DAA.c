/*      WEEK1_1_SKM_DAA:
merge sort
In an online bookstore, there are thousands of books available for purchase. The
bookstore's website allows customers to search for books based on various criteria,
such as title, author, publication date, and price. if a customer searches for books by
a specific title and price, the program can arrange the search results by price, from
low to high or vice versa, based on the customer's preference. */

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

    printf("Enter the number of books: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the Book Prices:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nChoose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);

    if (choice == 1) {
        mergeSort(a, 0, n - 1, 1);  // Ascending order
        printf("\nAfter sorting Book Prices in ascending order:\n");
    } else if (choice == 2) {
        mergeSort(a, 0, n - 1, 0);  // Descending order
        printf("\nAfter sorting Book Prices in descending order:\n");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    printArray(a, n);

    return 0;
}

