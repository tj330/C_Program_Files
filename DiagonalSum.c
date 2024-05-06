#include <stdio.h>

void main() {
    int A[20][20];
    int m,n,DSum=0,USum=0,LSum=0;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &m,&n);
    

    printf("Enter the elements in matrix A: ");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if(i == j) {
                DSum += A[i][j];
            }

            if (i < j) {
                USum += A[i][j];
            }

            if (i > j) {
                LSum += A[i][j];
            }
        }
    }

    printf("Diagonal Sum: %d\n", DSum);
    printf("Upper diagonal Sum: %d\n", USum);
    printf("Lower diagonal Sum: %d\n", LSum);

}