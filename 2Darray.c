#include <stdio.h>
int main(){
    int r, c;
    scanf("%d", &r);
    scanf("%d", &c);

    int array[r][c];
    printf("Enter the elements of array: ");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d\t", array[i][j]);
        }
    }
}