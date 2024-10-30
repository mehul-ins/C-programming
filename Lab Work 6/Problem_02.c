#include <stdio.h>
int factorial(int num){
    if(num == 0 || num == 1){
        //For sartting case if user inputs 1 and 0  
        return 1;
    }else{
        //Recursion
        return num * factorial(num - 1);
    }
}
int main(){
    int num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    int ans = factorial(num);
    printf("The factorial is: %d", ans);
}