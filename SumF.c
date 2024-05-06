#include <stdio.h>

int sum(int a, int b) {
    int s = a + b;
    return s;
}

int main() {
    int add = sum(3, 5);
    printf("Sum of a and b is: %d\n", add);
}