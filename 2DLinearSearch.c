#include <stdio.h>
int main() {
    int arr[10][10], m, n, target, count=0;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i][j] == target) {
                count++;
                printf("Element %d found at index [%d , %d]\n", target, i, j);
            }
        }
    }
    printf("The element is found %d number of time", count);
}