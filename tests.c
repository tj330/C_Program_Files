#include <stdio.h> 

int main() {
    int arr[5];
    printf("Enter elements: ");
    for (int i=0; i<5; i++) {
        scanf("%d", arr+i);
    }

    printf("You entered: ");
    for (int i=0; i<5; i++) {
        printf("%d\t", *(arr+i));
    }
}