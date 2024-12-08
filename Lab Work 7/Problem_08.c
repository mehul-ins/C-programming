#include <stdio.h>
void removeDuplicate(int arr[], int *n){
    // using pointer for call by reference use as if I will declare it as call by value then any changes will not reflect in main function that is using pointer approach in this problem.
    int temp[*n]; // temporary array of pointer size n.
    int k = 0; // k will iterate the loop.

    for(int i = 0; i < *n; i++){
        int duplicate = 0;
        for(int j = 0; j < k; j++){
            if(arr[i] == temp[j]){
                duplicate = 1;
                break; // do nothing skip the element.
            } 
        }
        if(!duplicate){
               temp[k++] = arr[i];
        }
    }
    // copying elements back to original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    *n = k;
}
int main(){
    // remove the duplicates from array.
    int arr[] = {1, 2, 4, 2, 6, 2, 4, 6, 1, 7, 8, 7};
    int n = sizeof(arr)/ sizeof(arr[0]);
    removeDuplicate(arr, &n);

    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}