#include <stdio.h>

int isSumOfDigits(int num){
     int sum = 0;
    while(num > 0){
        int rem = num % 10;
        num /= 10;
        sum += rem;
    }
     return sum;
}
int main(){
    int num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    int result = isSumOfDigits(num);
    printf("The sum digits of the number is: %d", result);
    return 0;
}