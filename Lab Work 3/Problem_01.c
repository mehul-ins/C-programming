#include <stdio.h>
int main (){
    double w; 
    printf("Enter the weight in kilograms: ");
    scanf("%lf", &w);
    double grams = w * 1000;
    double quintals = w * 1 / 100;
    double Metric  = w  * 1 / 1000; 
    double pounds = w  *  2.2024; 

    printf("%lf\n", grams); 
    printf("%lf\n", quintals); 
    printf("%lf\n", Metric); 
    printf("%lf\n", pounds); 
    

}