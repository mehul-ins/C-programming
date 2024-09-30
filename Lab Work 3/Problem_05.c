#include <stdio.h>


int main() {
    int n;
   printf("Enter the number n: ");
   scanf("%d", &n);
   int pv = 1;
   int ans = 0;
   while(n > 0){
    int remainder = n % 2;
    ans = ans + remainder * pv;
    pv *= 10;
    n = n / 2;
   }
   printf("The binary representation of the number is: %d\n", ans);
}
