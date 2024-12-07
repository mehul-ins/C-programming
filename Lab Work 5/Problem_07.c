#include <stdio.h>
int lcm(int a, int b);
int gcd(int a, int b);
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", lcm(a, b));

}
int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        int a = temp;
    }
    return a;
}
int lcm(int a, int b){
    int gcd = gcd(a, b);
    int lcm = (a*b) / gcd;
    return lcm;
}