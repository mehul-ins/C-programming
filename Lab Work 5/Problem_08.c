#include <stdio.h>
int powerOfFunc(int x, int n){
    int result = 1;
    for(int i = 0; i <= x; i++){
        result *= n;
    }
    return result;

}
int main(){
    int x, n;
    scanf("%d", &n);
    scanf("%d", &x);
    int ans = powerOfFunc(x, n);
    printf("%d", ans);

}