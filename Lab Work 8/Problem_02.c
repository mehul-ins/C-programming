#include <stdio.h>

// concatenation of two strings

void concat(char str1[], int s1, char str2[], int s2, char merged[] ){
    int k = 0;
    for(int i = 0; i < s1 - 1; i++){
        merged[k++] = str1[i];
    }
     for(int j = 0; j < s2 - 1; j++){
        merged[k++] = str2[j];
    }
    merged[k] = '\0';
}

int main(){
    char str1[] = {'M', 'e', 'h', 'u', 'l', '\0'};
    char str2[] = {' ', 'V', 'i', 'g', '\0'};
    int s1 = sizeof(str1)/sizeof(str1[0]);
    int s2 = sizeof(str2)/sizeof(str2[0]);
    char merged[s1 + s2 - 1];
    concat(str1, s1, str2, s2, merged);
   printf("The strings after concatenation: %s", merged);
}