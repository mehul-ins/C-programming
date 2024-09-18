#include <stdio.h>
// Swapping the value of given 2 numbers
int main(){
    int x, y;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("Enter the value of y:");
    scanf("%d", &y);
    //Swapping
    int temp = x;
    x = y;
    y = temp;

    printf("The value of x now is %d\n", x);
     printf("The value of y now is %d", y);
    return 0;


}