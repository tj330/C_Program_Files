#include <stdio.h>
int main() {
    int i;
    char str[15];
    printf("Enter the string: ");

    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
 
    puts(str);
    
    return 0;
}