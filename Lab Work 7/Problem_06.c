#include <stdio.h>
int main(){
    int arr[] = {1, 7, 5, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i -1; j++){
            if( arr[j] > arr[j+1] ){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } 
    int ans;
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        ans = arr[n-2];
    }
    printf("\nThe second largest element is: %d", ans);


    
}