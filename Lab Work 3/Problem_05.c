#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32];  // Array to store binary digits
    int i = 0;

    // Loop to store binary representation in reverse order
    while (n > 0) {
        binary[i] = n % 2;  // Store remainder when n is divided by 2
        n = n / 2;          // Divide n by 2
        i++;
    }

    // Print the binary number in the correct order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Function call to convert and display binary equivalent
    decimalToBinary(decimal);

    return 0;
}