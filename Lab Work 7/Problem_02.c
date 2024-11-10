#include <stdio.h>

int main(){
    int arr[3] = {1, 2, 3};
    int max = arr[0];
    for(int i = 0; i < 3; i++){
        if(arr[i] > arr[0]){
            max = arr[i];
        }
    }
    printf("%d\n", max);
    return 0;
}