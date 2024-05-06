#include <stdio.h>

void main() {
    int A[20][20];
    int m,n, sum=0;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &m,&n);
    

    printf("Enter the elements in matrix A: ");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
            sum += A[i][j];
        }
    }


    printf("The sum is: %d", sum);
}