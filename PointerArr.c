#include <stdio.h>

void readArr(int arr[10], int n) {
    printf("Enter the elements in array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }
}

void printArr(int arr[10], int n) {
    printf("Elements in array are: ");
    for (int i=0; i<n; i++) {
        printf("%d\t", *(arr+i));
    }
    printf("\n");
}

int main() {
    int arr[10], n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    readArr(arr, n);
    printArr(arr, n);
}