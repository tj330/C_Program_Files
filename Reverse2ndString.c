#include <stdio.h>

void main() {
    char str1[10], str2[10], n;
    int n;
    printf("Enter the string to reverse: ");
    gets(str1);

    for (n = 0; str1[n] != '\0'; n++);

    for (int i=0; i<n; i++) {
        str2[i] = str1[n-1-i];
    }
    str2[n]='\0';
    puts(str2);
}