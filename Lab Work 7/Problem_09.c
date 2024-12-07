#include <stdio.h>
float avgArray(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    float avg = (float)sum / n;
    return avg;
}

int main(){
    int arr[] = {1, 4, 6, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The average of elements of array is: %d", avgArray(arr, n));
    return 0;
}