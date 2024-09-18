#include <stdio.h>
// Finding the maximum from 2 given numbers.
int main(){
    int i , j;
    printf("Enter value of i:");
    scanf("%d", &i);
    printf("Enter value of j:");
    scanf("%d", &j);
    printf("The greater number is: ");
    if( i > j){
        printf("%d", i);
    }else{
        printf("%d", j);
    }
    return 0;

}