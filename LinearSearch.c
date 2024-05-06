#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i=0; i<n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[10], n, target;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);

    if (result == -1) {
        printf("Target not found");
    }
    else {
        printf("Target found at index: %d\n", result);
    }
    
    return 0;
}