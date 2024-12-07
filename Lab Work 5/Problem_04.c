#include <stdio.h>
void factors(int n);

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
}
void factors(int n){
    for(int i = 0; i <= n; i++){
        if (n % i == 0)
        {
        printf("%d\t", i);
        }
        
    }
}