#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    printf("Enter first and second number: ");
    scanf("%d%d", &num1, &num2);
    printf("Before swapping num1 is %d and num2 is %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping num1 is %d and num2 is %d\n", num1, num2);
}