#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value a: ");
    scanf("%d", &a);
    printf("Enter the value b: ");
    scanf("%d", &b);
    int avg  = (a + b) / 2;
    printf("The average value of a and b: ");
    printf("%d", avg);

}