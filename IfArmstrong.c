#include <stdio.h>
#include <math.h>

void isArmstrong(int num) {
    int original = num;
    double sum = 0;

    int digits = log10(original) +  1;

    while (num != 0) {
        int rem = num % 10;
        sum += pow(rem, digits);
        num = num / 10;
    }

    if (sum == original) {
        printf("%d is an armstrong number", original);
    }

    else {
        printf("%d is not an armstrong number", original);
    }
}

int main() {
    int num;
    printf("Enter number to check whether armstrong or not: ");
    scanf("%d", &num);
    isArmstrong(num);
    return 0;
}