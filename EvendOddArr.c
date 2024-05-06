#include <stdio.h>
void main() {
    int arr[10], n, odd[10], even[10], evenCount=0, oddCount=0;

    printf("Enter the no of elements in array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else {
            
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("No of odd numbers in array is: %d\n", oddCount);
    printf("Odd elements are: ");
    for(int i=0; i<oddCount; i++) {
        printf("%d\t",odd[i]);
    }
    printf("\n");

    printf("No of even numbers in array is: %d\n", evenCount);
    printf("Even elements are: ");
    for(int i=0; i<evenCount; i++) {
        printf("%d\t", even[i]);
    }
}