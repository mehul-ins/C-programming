#include <stdio.h>

int main(){
    int f;
    printf("Enter the temperature in Farenheit :");
    scanf("%d", &f);

    int c = (f - 32) *  5 / 9;
    printf("The number in Celcius");
    printf("%d", c);
    return 0;
}