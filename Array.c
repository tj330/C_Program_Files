#include <stdio.h>

int main() {
    int n, arr[10], ch, sum=0, avg=0, largest, smallest, search, c, temp;
    char cont= 'y'; 
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    while(cont == 'y') { 
        printf("1.Sum and Average\n");
        printf("2.Largest element in the array\n");
        printf("3.Smallest element in the array\n");
        printf("4.Search\n");
        printf("5.Sort\n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                for (int i=0; i<n; i++) {
                    sum += arr[i];
                }
                avg = sum / n;
                printf("The sum of the elements in the array is: %d\n", sum);
                printf("The average of the elements in the array is: %d\n", avg);
                break;
            case 2:
                largest = arr[0];
                for (int i=1; i<n; i++) {
                    if (arr[i] > largest) {
                        largest = arr[i];
                    }
                }
                printf("The largest element in the array is: %d\n", largest);
                break;
            case 3:
                smallest = arr[0];
                for (int i=1; i<n; i++) {
                    if (arr[i] < smallest) {
                        smallest = arr[i];
                    }
                }
                printf("The smallest element in the array is: %d\n", smallest);
                break;
            case 4:
                printf("Enter the number to search: ");
                scanf("%d", &search);
                for (int i=0; i<n; i++) {
                    if (arr[i] == search) {
                        printf("The element is present at index: %d\n", i);
                    }
                }
                break;
            case 5:
                for (int i=0; i<n-1; i++) {
                    for (int j=0; j<n-1-i; j++) {
                        if (arr[j] > arr[j+1]) {
                            temp = arr[j+1];
                            arr[j+1] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Array sorted successfully.\n");
                break; 
            case 6:
                cont = 'n'; 
                break;
            default:
                printf("Wrong input\n");
                break;
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cont);
    
    }
    return 0;
}
