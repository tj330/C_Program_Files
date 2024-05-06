#include <stdio.h>
void numPrint(int n) {
    if (n < 0) {
        return;
    }

    numPrint(n-1);
    printf("%d\t", n);
}

int main() {
   numPrint(10);
   printf("\n");
} 