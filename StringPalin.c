#include <stdio.h>
int main() {
    int i;
    char str1[15], flag=1;
    printf("Enter the string: ");

    gets(str1);
    for (i = 0; str1[i] != '\0'; i++);
 

    for (int j=0; j<i/2; j++) {
         if (str1[j] != str1[i-j-1]) {
            flag=0;
            break;
        }
    }

    if (flag == 1) {
        printf("Entered string is a palindrome");
    }
    else {
        printf("Entered string is not a palindrome");
    }
    
    return 0;
}