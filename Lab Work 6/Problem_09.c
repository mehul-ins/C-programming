#include <stdio.h>
int sumOfNaturalNumbers(int n){
    int ans = (n * (n + 1)) / 2;
    return ans;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ans = sumOfNaturalNumbers(n);
    printf("The sum of n natural number is: %d", ans);
}