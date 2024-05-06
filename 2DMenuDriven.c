#include <stdio.h>

int main() {
    int A[20][20], B[20][20], C[20][20];
    int ch, m, n, p, q, DSum, LSum, USum, rsum, csum;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &m, &n);

    printf("Enter the elements in matrix A: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    do {
        printf("\n1.Sum of two matrices\n");
        printf("2.Sum of diagonal, lower diagonal elements in  matrix\n");
        printf("3.Sum of columns and rows in matrix\n");
        printf("4.Matrix multiplication\n");
        printf("5.Transpose of a matrix\n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:  
                printf("Enter the number of rows and columns of matrix B: ");
                scanf("%d %d", &p, &q);
                printf("Enter the elements in matrix B: ");
                if (m==n && p==q) {
                    for (int i = 0; i < p; i++) {
                        for (int j = 0; j < q; j++) {
                            scanf("%d", &B[i][j]);
                        }
                    }

                    for (int i = 0; i < m; i++) {
                        for (int j = 0; j < n; j++) {
                            C[i][j] = A[i][j] + B[i][j];
                        } 
                    }

                    printf("Sum of matrix A and B: \n");
                    for (int i = 0; i < m; i++) {
                        for (int j = 0; j < n; j++) {
                            printf("%d\t", C[i][j]);
                        }
                        printf("\n");
                    }

                }
                
                break;

            case 2:
                DSum = 0;
                LSum = 0;
                USum = 0;
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i == j) {
                            DSum += A[i][j];
                        }
                        if (i > j || i == j) {
                            LSum += A[i][j];
                        }
                        if (i < j || i == j) {
                            USum += A[i][j];
                        }
                    }
                }
                printf("Sum of diagonal elements: %d\n", DSum);
                printf("Sum of upper diagonal elements: %d\n", USum);
                printf("Sum of lower diagonal elements: %d\n", LSum);
                break;

            case 3:
                rsum = 0;
                csum = 0;
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        rsum += A[i][j];
                    }
                    printf("Sum of the %d row is = %d\n", i, rsum);
                    rsum = 0;
                }

                for (int j = 0; j < n; j++) {
                    for (int i = 0; i < m; i++) {
                        csum += A[i][j];
                    }
                    printf("Sum of the %d column is = %d\n", j, csum);
                    csum = 0;
                }
                break;

            case 4:
                printf("Enter the number of rows and columns of matrix B: ");
                scanf("%d %d", &p, &q);
                printf("Enter the elements in matrix B: ");
                for (int i = 0; i < p; i++) {
                    for (int j = 0; j < q; j++) {
                        scanf("%d", &B[i][j]);
                    }
                }

                if (n == p) {
                    for (int i = 0; i < m; i++) {
                        for (int j = 0; j < q; j++) {
                            C[i][j] = 0;
                            for (int k = 0; k < n; k++) {
                                C[i][j] += A[i][k] * B[k][j];
                            }
                        }
                    }
                    printf("The result of matrix multiplication is: \n");
                    for (int i = 0; i < m; i++) { 
                        for (int j = 0; j < q; j++) {
                            printf("%d\t", C[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Cannot multiply\n");
                }
                break;

            case 5:
                printf("Transpose of the matrix is: \n");
                for (int i = 0; i < m; i++) {
                        for (int j = 0; j < n; j++) {
                            printf("%d\t", A[j][i]);
                        }
                        printf("\n");
                    }
                break;

            case 6:
                printf("Exiting\n");
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    } while (ch != 6);

    return 0;
}