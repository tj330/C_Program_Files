#include <stdio.h>
void main() {
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90) {
        printf("Entered alphabet is in upper case");
    }
    else if (ch >= 97 && ch <= 122) {
        printf("Entered alphabet is in lower case");
    }
}