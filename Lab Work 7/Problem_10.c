#include <stdio.h>

void leftRotate(int arr[], int n, int k) {
    k = k % n;

   
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

   
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

 
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    printf("Original array: ");
    printArray(arr, n);

    leftRotate(arr, n, k);

    printf("Array after %d left rotations: ", k);
    printArray(arr, n);

    return 0;
}
