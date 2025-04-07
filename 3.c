#include <stdio.h>
#include <string.h>
#include <ctype.h>

// List of C keywords
char keywords[][10] = {
    "int", "float", "char", "if", "else", "while", "return", "for", "void"
};

// Check if a word is a keyword
int isKeyword(char *word) {
    for (int i = 0; i < sizeof(keywords)/sizeof(keywords[0]); i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Check if a character is an operator
int isOperator(char ch) {
    char operators[] = "+-*/=%<>";
    for (int i = 0; operators[i] != '\0'; i++) {
        if (ch == operators[i])
            return 1;
    }
    return 0;
}

int main() {
    // Simulated input code as a string
    char code[] = "int main() { int x = 10; float y = x + 5; return 0; }";
    char buffer[50];
    int i = 0;

    printf("🔍 Lexical Analysis Output:\n\n");

    for (int j = 0; code[j] != '\0'; j++) {
        char ch = code[j];

        if (isalnum(ch)) {
            buffer[i++] = ch;
        } else {
            if (i > 0) {
                buffer[i] = '\0';
                if (isKeyword(buffer))
                    printf("🔑 Keyword     : %s\n", buffer);
                else
                    printf("🧍 Identifier  : %s\n", buffer);
                i = 0;
            }

            if (isOperator(ch)) {
                printf("⚙️ Operator    : %c\n", ch);
            }
        }
    }

    return 0;
}
