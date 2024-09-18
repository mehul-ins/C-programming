#include <stdio.h>
// Finding the maximum from 3 given numbers.
int main(){
    int i, j, k;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    printf("Enter the value of j: ");
    scanf("%d", &j);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    if( i > j){
        if( i > k){
            printf("%d", i);
        }
    }else if( j > k){
        printf("%d", j);
    }else{
        printf("%d", k);
    }
    
    return 0;
}



// #include <stdio.h>
// // Finding the maximum from 3 given numbers.
// int main(){
//     int i, j, k;
//     printf("Enter the value of i: ");
//     scanf("%d", &i);
//     printf("Enter the value of j: ");
//     scanf("%d", &j);
//     printf("Enter the value of k: ");
//     scanf("%d", &k);

//     if( i > j){
//         if( i > k){
//             printf("%d", i);
//         }
//     }
//     if( j > k){
//         if( j > i){
//             printf("%d", j);
//         }
//     }
//     if( k > j){
//         if( k > i){
//             printf("%d", k);
//         }
//     }
//     return 0;
// }

