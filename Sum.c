#include <stdio.h>

void main() {
    int A[20][20], B[20][20], C[20][20];
    int m,n,p,q;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &m,&n);
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d%d", &p,&q);

    printf("Enter the elements in matrix A: ");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements in matrix B: ");
    for (int i=0; i<p; i++) {
        for (int j=0; j<q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    if (m == p && n == q) {
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        printf("The elements in C are: \n");
        for (int i=0; i<p; i++) {
            for (int j=0; j<q; j++) {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Summation not possible");
    }

    
}