#include <stdio.h>
int gcd(int a, int b){
    if(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
     printf("Enter the value of b: ");
    scanf("%d", &b);
    int ans = gcd(a, b);
    printf("The value of GCD is: %d", ans);
}