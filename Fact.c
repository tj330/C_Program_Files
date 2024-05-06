#include <stdio.h> 

int fact(int n) {
    int f=1;

    while(n>1) {
        f = f*n;
        n--;
    }

    return f;
}

int main() {
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %d\n", n, fact(n));
}