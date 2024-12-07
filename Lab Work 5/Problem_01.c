#include <stdio.h>
int maxOfTwo(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int maximum = maxOfTwo(a, b);
    printf("%d", maximum);
    return 0;
}