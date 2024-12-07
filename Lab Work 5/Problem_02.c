#include <stdio.h>
int maxOfThree(int x, int y, int z){
    if(x > y){
        if( x > z){
            return x;
        }else{
            return z;
        }
    }else if(y > z){
        return y;
    }else{
        return z;
    }
}
int main(){
    int a, b, c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);

    int maximum = maxOfThree(a, b, c);
    printf("%d",maximum);
    return 0;
}