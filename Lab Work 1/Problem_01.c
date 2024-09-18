#include <stdio.h>
//Write a program to predict the smallest multiple of j but it should be larger than i.
int smallest_multiple(int i, int j){
    if(i % j == 0){
        return i + j;
    }else{
        return ((i + j) + 1 * j);
    }
}

int main(){
    int i , j;
    printf("Enter value of i:");
    scanf("%d", &i);
    printf("Enter value of j:");
    scanf("%d", &j);
    
    int result = smallest_multiple(i, j);
    printf("The number is : %d\n", result);
    return 0;

}