#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding
void runLengthEncode(char *input) {
    int i, count;
    int length = strlen(input);

    for (i = 0; i < length; i++) {
        // Start counting repeats of the current character
        count = 1;

        // Check next characters as long as they are the same
        while (i < length - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // Print the character followed by its count
        printf("%c%d", input[i], count);
    }

    printf("\n");  // Newline after encoded output
}

int main() {
    char input[100];

    // Prompt the user for input
    printf("Enter a string to compress using RLE: ");
    scanf("%s", input);

    printf("Compressed (RLE) output: ");
    runLengthEncode(input);

    return 0;
}
