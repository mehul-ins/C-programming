#include <stdio.h>

int main(){
    char a;
    printf("Enter the char: ");
    scanf("%c", &a);
    printf("The ASCII value is %d\n", a);
    int b = a;

    if(b >= 65 && b <= 90)
    {
        printf("It's an Uppercase character");
    }
    else if(b >= 97 && b <= 122)
    {
        printf("It's an lowercase character");
    }
    else if(b >= 48 && b <= 57)
    {
        printf("It's an digit character");
    }
    else
    {
        printf("Special Symbol");
    }
}