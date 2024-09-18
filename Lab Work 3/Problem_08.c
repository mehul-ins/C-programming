#include <stdio.h>

int isPowerOfTwo(int num) {
    // A number is a power of 2 if it has only one bit set to 1 in its binary form.
    // This can be checked using the condition: num & (num - 1) == 0 and num > 0
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a power of 2
    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }

    return 0;
}