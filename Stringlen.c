#include <stdio.h> 

void main() {
    char str[15], i;
    printf("Enter the string: ");
    gets(str);


    for (i = 0; str[i] != '\0'; i++);
    printf("Length of the string is: %d", i);
}