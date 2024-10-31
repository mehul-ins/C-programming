#include <stdio.h>

int isSumOfDigits(int num){
     int ans = 0;
    while(num > 0){
        int rem = num % 10;
        num /= 10;
        ans += rem;
    }
     return ans;
}
int main(){
    int num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    int result = isSumOfDigits(num);
    printf("The sum digits of the number is: %d", result);
}