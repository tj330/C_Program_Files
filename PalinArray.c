#include <stdio.h>
int main() {
    int arr1[20], arr2[20], n, i, flag=1;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for (i=0; i<n; i++) {
        scanf("%d", &arr1[i]);
    }
 
    for (int j=0; j<i/2; j++) {
        if (arr1[j] != arr1[i-j-1]) {
            flag = 0;
            break;
        }
    }  

    if (flag == 1) {
        printf("Entered array is palindrome");
    }
    else {
        printf("Entered array is not palindrome");
    }
}