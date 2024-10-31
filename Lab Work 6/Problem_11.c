#include <stdio.h>
int main(){
    
    printf("Inverted right-angled triangle pattern\n");

    for(int i = 1; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            printf("* ");
        }
        printf("\n");
    }
}