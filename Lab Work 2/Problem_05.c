#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:\n"); 
    scanf("%d", &n);
    int count = 0;
    while( n != 0){
        n = n/10; //Last will remove
        count++;
    }
    printf("The number of digits in the given number is:  %d", count);
}