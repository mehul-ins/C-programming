#include <stdio.h>

int main() {
    int n;
   printf("Enter the number n: ");
   scanf("%d", &n);
   int pv = 1;
   int count = 0;
   while(n > 0){
    int remainder = n % 2;
    n = n / 2;
    count += remainder;
   }
   if(count == 1){
    printf("Power of two");
   }else{
    printf("Not the power of two");
   }
}
