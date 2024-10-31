#include <stdio.h>

int power(int base, int exp){
    if(exp == 0){
        return 1;
    }

    return base * power(base, exp - 1 );
}
int main() {
    int base , exp;
    int base;
    printf("Enter the value of base: ");
    scanf("%d", &base);
    int exp;
    printf("Enter the value of power: ");
    scanf("%d", &exp);
    printf("%d raised to the power of %d is %d\n", base, exp, power(base, exp));
    return 0;
}