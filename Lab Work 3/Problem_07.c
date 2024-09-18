#include <stdio.h>
int main(){
    int n;
    int count = 0;
    printf("Enter the number n: ");
    scanf("%d", &n);
    while( n != 0){
        n &= (n - 1);
        count++;
    }
    
    printf("The number of set of bits is %d ", count );
}