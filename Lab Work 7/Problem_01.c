#include <stdio.h>

int main(){
    int sum = 0;
    int arr[3] = {1, 2, 3};
    for(int i = 0; i < 3; i++){
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;

}
