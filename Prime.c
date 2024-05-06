#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;
//     }

//     int c = 2;

//     while (c*c <= num) {
//         if (num % c == 0) {
//             return false;
//         }

//         c++;
//     }

//     return true;
// }

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    int c = 2;

    while (c <= sqrt(num)) {
        if (num % c == 0) {
            return 0;
        }

        c++;
    }

    return 1;
}

int main() {
    int num;
    printf("Enter number to check whether prime or not: ");
    scanf("%d", &num);

    if (isPrime(num)==1 ) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}

