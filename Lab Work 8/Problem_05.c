#include <stdio.h>
// void sort(char str[], int n){
//     for(int i = 0; i < n - 1; i++){
//         for(int j = 0; j < n - i - 1; j++){
//             if(str[j] > str[j+1]){
//                 char temp = str[j];
//                 str[j] = str[j+1];
//                 str[j+1] = temp; 
//             }
//         }
//     }
// }
// int main(){
//     char str[] = {'m', 'e', 'h', 'u', 'l', '\0'};
//     int n = sizeof(str) / sizeof(str[0]) - 1;
//     sort(str, n);

    
//         printf("%s", str);
    
    
// }


#include <stdio.h>
#include <string.h>

// Function to sort an array of strings alphabetically
void sort(char str[][20], int n) {
    char temp[20]; // Temporary array for swapping

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare two strings
            if (strcmp(str[j], str[j + 1]) > 0) {
                // Swap the strings
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
}

int main() {
    // Declare a 2D array of strings
    char str[][20] = {"apple", "coding", "macbook", "iphone", "analog"};
    int n = sizeof(str) / sizeof(str[0]); // Number of strings

    printf("Original array of strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    // Sort the strings
    sort(str, n);

    printf("\nSorted array of strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
