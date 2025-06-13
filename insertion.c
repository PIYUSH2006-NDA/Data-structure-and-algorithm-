#include <stdio.h>

void dsp(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("the array is :-%d \n", arr[i]);
    printf("\n");
}
int insert(int arr[], int n, int pos, int value){
     for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    return n + 1; 
}

int main() {
    int k[20] = {2, 6, 5, 4, 5, 8, 5, 4}; 
    int size = 8;

    printf("Original array:\n");
    dsp(k, size);

    int value, position;
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position (0 to %d): ", size);
    scanf("%d", &position);

    size = insert(k, size, position, value);

    printf("Array after insertion:\n");
    dsp(k, size);

    return 0;
}
