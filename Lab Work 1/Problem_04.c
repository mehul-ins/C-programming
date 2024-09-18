#include <stdio.h>
int main(){
    int N;
    printf("Enter the amount: ");
    scanf("%d", &N);
    int denominations  = 0;
    while ( N >= 100){
        N = N - 100;
        denominations++;
    }
     while ( N >= 50){
        N = N - 50;
        denominations++;
    }
     while ( N >= 10){
        N = N - 10;
        denominations++;
    }
     while ( N >= 5){
        N = N - 5;
        denominations++;
    }
     while ( N >= 2){
        N = N - 2;
        denominations++;
    }
     while ( N >= 1){
        N = N - 1;
        denominations++;
    }
    printf("The minimum number of denominations required are: ");
    printf("%d", denominations);
    return 0;
}
