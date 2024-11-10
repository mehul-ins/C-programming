#include <stdio.h>
int main(){
    int count = 0;
    int arr[5] = {1, 6, 3, 4, 6};
    int num = 6;
    for(int i = 0; i < 5; i++){
        if(arr[i] == num){
            count++;
        }
    }
    printf("%d", count);
    return 0; 
}