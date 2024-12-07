#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character from fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    // Use strtok() to split the sentence into words
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}
