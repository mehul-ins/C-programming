#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c; 
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);
    double dis = (b * b) - 4.0*a*c;

    if( dis < 0 ){
        printf("No real roots exists");
    }else{
        double x = (-b + sqrt(dis))/ 2.0*a ;
        double y =  (-b - sqrt(dis))/ 2.0*a ;

        printf("%lf\n", x);
        printf("%lf", y);
    }
}