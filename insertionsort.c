#include <stdio.h>

void printarray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionsort(int* a, int n) {
    for (int i = 0; i < n; i++) {
        int key=a[i];
        int j=i-1;
        while (j>=0 && a[j]<key){
            a[j+1]=a[j];
            j--;
           
        }
         a[j+1]=key;
    }
}

int main() {
    int a[] = {1, 2, 3, 6, 5, 6, 5, 8, 9, 5};
    int n = 10;
    printf("Original array:\n");
    printarray(a, n);

    insertionsort(a, n);

    printf("Sorted array:\n");
    printarray(a, n);

    return 0;
}
