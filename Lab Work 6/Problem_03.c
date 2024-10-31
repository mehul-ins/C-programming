#include <stdio.h>
int fibonaaci(int n){
    if( n == 0 || n == 1){
        return n;
    }else{
        return fibonaaci(n - 1) + fibonaaci(n - 2);
    }

}
int main(){
    int n;
    printf("Enter the value of the term of fibonacci series: ");
    scanf("%d", &n);
    int ans = fibonaaci(n);
    printf("The value of %d term in fibonacci series is: %d", n, ans);

}