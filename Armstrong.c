#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;

    while (n > 0) {
        int rem = n % 10;
        n = n / 10;
        sum = sum + rem*rem*rem; 
    }

    return sum == original;
}

int digits(int num) {
    return log10(num) + 1;
}

int main() {
int number = 153;
printf("%d",digits(555));

    // if (isArmstrong(number)) {
    //     printf("%d is a Armstrong number.\n", number);
    // } else {
    //     printf("%d is not an Armstrong number.\n", number);
    // }

    return 0;
}