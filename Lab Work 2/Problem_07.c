#include <stdio.h>

int main(){
    int n;
    int i = 1;
    printf("Enter the value of n:\n"); 
    scanf("%d", &n);
    int sum = 0;
    while ( i <= n){
        if(i % 2 == 0){
            sum  += i;
            i++;
        }
    }
    printf("The sum of even digits till n is:  %d", sum);
}