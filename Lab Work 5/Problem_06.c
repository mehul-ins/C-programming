#include <stdio.h>
int gcd(int a, int b);
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", gcd(a, b));

}
int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}