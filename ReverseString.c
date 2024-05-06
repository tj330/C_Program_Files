#include <stdio.h>

void main() {
    char str[10];
    int n;
    printf("Enter the string to reverse: ");
    gets(str);
    for (n = 0; str[n] != '\0'; n++);
    int start = 0; 
    int end = n - 1; 
    while (start < end) { 
        char temp = str[start]; 
        str[start] = str[end]; 
        str[end] = temp; 
        start++; 
        end--; 
    }
    puts(str);
}