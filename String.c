#include <stdio.h> 

void main() {
    char str1[15], str2[10], m, n;
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    for (m = 0; str1[m] != '\0'; m++);
    for (n = 0; str2[n] != '\0'; n++);

    for (int i=0; i<n; i++) {
        str1[m+i] = str2[i];
    }
    str1[n+m]='\0';
    printf("The merged array is: ");
    puts(str1);
}