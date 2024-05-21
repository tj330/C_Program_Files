#include <stdio.h>

int fact(int x) {
    if(x == 0) {
        return 1;
    }
        
    else {
        return (x * fact(x - 1));
    }
}

int main() {
    int n, r, ncr;
    printf("Enter n and r: ");
    scanf("%d%d", &n, &r);
    ncr = fact(n) / (fact(n - r) * fact(r));
    printf("ncr is: %d\n", ncr);
    return 0;
}