#include <stdio.h> 

void main() {
    char str1[15], str2[10];
    int n, i;
    printf("Enter the string: ");
    gets(str1);

    for (n = 0; str1[n] != '\0'; n++);
    for (i=0; i<n; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("The copied string is: ");
    puts(str2);
}