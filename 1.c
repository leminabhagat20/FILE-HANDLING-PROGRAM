#include <stdio.h>

int main() {
    FILE *file;

    // Step 1: Create & write
    file = fopen("notes.txt", "w");
    fprintf(file, "This is line 1 (created).\n");
    fprintf(file, "This is line 2 (written).\n");
    fclose(file);

    // Step 2: Append
    file = fopen("notes.txt", "a");
    fprintf(file, "This is line 3 (appended).\n");
    fprintf(file, "This is line 4 (appended).\n");
    fclose(file);

    // Step 3: Read
    file = fopen("notes.txt", "r");
    char line[100];
    printf("📄 Final file content:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);

    return 0;
}
