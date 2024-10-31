#include <stdio.h>
 int isPrime(int num){
    for(int i = 2; i <= num; i++){
        if(num % i == 0 ){
            return 0;
        }
        else{
            return 1;
        }
    }
    return 0;
 }
 int main(){
    int num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    if(isPrime(num)){
        printf("The number is prime");
    }else{
        printf("The number is not prime");
    }
 }
