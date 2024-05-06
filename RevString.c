#include <stdio.h>

void revString(char str[20]) {
    int n;
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
}

void main() {
    char str[20];
    
    printf("Enter the string to reverse: ");
    fgets(str, sizeof(str), stdin);
    revString(str);
    printf("The reversed string is: ");
    puts(str);
}