#include <stdio.h>

int main() {
    // Open a file for writing
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Use putc to write characters to the file
    char characters[] = "Hello, World!";
    for (int i = 0; characters[i] != '\0'; i++) {
        putc(characters[i], fp);
    //     if (putc(characters[i], fp) == EOF) {
    //         printf("Error writing character to file.\n");
    //         fclose(fp);
    //         return 1;
    //     }
    }

    // Close the file
    fclose(fp);

    printf("Characters written to output.txt.\n");
    return 0;
}
