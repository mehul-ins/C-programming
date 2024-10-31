#include <stdio.h>
float celsiusToFahrenheit(float celsius){
    float farenheit = (celsius * 9/5) + 32;
    return farenheit;
}

int main(){
    int c;
    printf("Enter the value of temperacture in celcius: ");
    scanf("%d", &c);

    int ans = celsiusToFahrenheit(c);
    printf("The value of temperature in farenheit: %d", ans);
}