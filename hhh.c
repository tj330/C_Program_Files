#include <stdio.h>
void main() {
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i+=2) {
        printf("%d\t", i);
    }
    
}