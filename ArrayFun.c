#include <stdio.h>

void readArray(int arr[],int *n) {
    printf("Enter the number of elements in array: ");
    scanf("%d", n);
    printf("Enter the elements in array: ");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array read successfully\n");
}

void printArray(int arr[], int *n) {
    printf("The elements in array are: \n");
    for (int i=0; i<*n; i++) {
        printf("%d\t", arr[i]);
    }
}

void insert(int arr[10],int *n, int idx) {
    int element;
    printf("Enter the element to be entered at index %d: ", idx);
    scanf("%d", &element);

    (*n)++;
    for (int i = *n - 1; i > idx; i--) {
        arr[i] = arr[i - 1];
    }
        
    arr[idx] = element;
}

int main() {
    int arr[10], n, idx;
    readArray(arr, &n);

    printf("Enter the index of array in which the element is to be entered: ");
    scanf("%d", &idx);
    
    insert(arr, &n, idx);
    
    printArray(arr, &n);
}