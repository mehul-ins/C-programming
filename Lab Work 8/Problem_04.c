#include <stdio.h>
#include <string.h>

#define MAX_CHARACTERS 256 

void countOccurrences(char str[]) {
    int count[MAX_CHARACTERS] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;  
    }

   
    printf("Character occurrences in the string:\n");
    for (int i = 0; i < MAX_CHARACTERS; i++) {
        if (count[i] > 0) {
            printf("'%c' : %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

  
  
    countOccurrences(str);

    return 0;
}
