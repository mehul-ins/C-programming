#include <stdio.h>
void isPrime(int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    isPrime(n);
}
void isPrime(int n){
    int count = 0;
    for(int i = 0; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count > 2){
        printf("The number is not prime");
    }else{
        printf("The number is prime");
    }
}