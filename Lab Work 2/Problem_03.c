#include <stdio.h>
int main(){
    int n; 
    printf("Enter the value n: ");
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i <= n; i++){
        if (n % i == 0){
            count ++;
        }
    }
    if( count > 2){
        printf("The number is not prime");
    }else{
        printf("The number is prime");
    }
}
