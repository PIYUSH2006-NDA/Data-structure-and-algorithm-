#include <stdio.h>

void dsp(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("the array is :-%d \n", arr[i]);
    printf("\n");
}

int deletion(int arr[], int n, int pos) {
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return n; // Size remains unchanged
    }

    // Shift elements to the left from pos
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1; // Return updated size
}

int main() {
    int k[20] = {2, 6, 5, 4, 5, 8, 5, 4};
    int size = 8;

    printf("Original array:\n");
    dsp(k, size);

    int position;
    printf("Enter position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    size = deletion(k, size, position);

    printf("Array after deletion:\n");
    dsp(k, size);

    return 0;
}
