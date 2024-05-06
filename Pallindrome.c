#include <stdio.h>
void main() {
    int num, temp, rem, rev = 0;
    printf("Enter the number to check: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        rem = temp%10;
        rev = (rev*10) + rem;
        temp = temp/10;
    }

    if (rev == num) {
        printf("Number is Palindrome");
    }
    else {
        printf("Number is not Palindrome");
    }
}