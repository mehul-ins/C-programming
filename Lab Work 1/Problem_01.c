#include <stdio.h>
//Write a program to predict the smallest multiple of j but it should be larger than i.
int smallest_multiple(int i, int j){
   int multiple = (i / j ) * j;
   if(multiple  <= i){
    multiple += j;
   }
   return multiple;
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