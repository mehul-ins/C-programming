#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;

    // Move towards the center of the string
    while (left < right) {
        // Skip non-alphanumeric characters
        if (!isalnum(str[left])) {
            left++;
        } else if (!isalnum(str[right])) {
            right--;
        } else {
            // Compare characters (case insensitive)
            if (tolower(str[left]) != tolower(str[right])) {
                return 0;  // Not a palindrome
            }
            left++;
            right--;
        }
    }

    return 1;  // String is a palindrome
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


