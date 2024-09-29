#include <stdio.h>
int main()
{
    // SOLID RECTANGLE
    printf("Solid Rectangle\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // HOLLOW RECTANGLE
    printf("Hollow Rectangle\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 3 || j == 5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    // HALF PYRAMID
    printf("Half pyramid\n");
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // INVERTED HALF PYRAMID
    printf("Inverted Half pyramid\n");
    for (int i = 6; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    // Hollow Inverted Half Pyramid
    printf("Hollow Inverted Half Pyramid\n");
    for(int i = 6; i >= 1; i--){
        for (int j = 1; j <= i; j++)
        {
            if(j == 1 || i == 6 || i == j){
                 printf("*");
            }else{
                printf(" ");
            }
        }
      printf("\n");   
    }
    //FULL PYRAMID
    printf("Full Pyramid\n");
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6 - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    //INVERTED HALF PYRAMID
    printf("Inverted half pyramid\n");
    for(int i = 6; i >= 1; i--){
        for(int j = 0; j < 6 - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    //Hollow Full Pyramid
     printf("Hollow Full Pyramid\n");
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6 - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    //Half pyramid using numbers
    printf("Half pyramid using numbers");
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    //Inverted Half pyramid using numbers
    printf("Inverted Half pyramid using numbers\n");
    for(int i = 5; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    //  for(int i = 1; i <= 5; i++) {
    //     // Printing leading spaces
    //     for(int j = i; j < 5; j++) {
    //         printf("  ");
    //     }
        
    //     // Printing increasing part of the row
    //     for(int k = 1; k <= i; k++) {
    //         printf("%d ", k + i - 1);
    //     }

    //     // Printing decreasing part of the row
    //     for(int k = i - 1; k >= 1; k--) {
    //         printf("%d ", k + i - 1);
    //     }
        
    //     // Move to next line after printing each row
    //     printf("\n");
    // }
    //Hollow pattern pyramid using numbers 
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6 - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= (2 * i - 1); j++){
            if(i == 6 || j == 1 || j == (2 * i - 1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5 - i; j++){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("%d", k + i - 1);
        }
        for(int k = i - 1; k >= 1; k--){
            printf("%d", k + i - 1);
        }
        printf("\n");
    }

    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6 - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            if(i == 6 || j == 1 || i == j){
                 printf("%d", j);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= i; j++){
            if(i == 6 || j == 1 || i == j){
                 printf("%d", j);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = 6; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            if(i == 6 || j == 1 || i == j){
                 printf("%d", j);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}