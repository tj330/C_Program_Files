#include <stdio.h>

void readMatrix(int mat1[20][20]) {
    int m, n;
    printf("Enter the number of rows and columns of matrix1: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements in matrix1: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Matrix read successfully\n");
}

void sumMatrix(int mat1[20][20], int mat2[20][20]) {
    int mat3[20][20];
    int m, n, p, q;
    printf("Enter the number of rows and columns of matrix1: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements in matrix1: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix2: ");
    scanf("%d%d", &p, &q);
    
    if (m==n && p==q) {
        printf("Enter the elements in matrix2: ");
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                scanf("%d", &mat2[i][j]);
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            } 
        }

        printf("Sum of matrix1 and matrix2: \n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d\t", mat3[i][j]);
            }
            printf("\n");
        }

    }
}

void matrixProduct(int mat1[20][20], int mat2[20][20]){
    int mat3[20][20];
    int m, n, p, q;
    printf("Enter the number of rows and columns of matrix1: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements in matrix1: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix2: ");
    scanf("%d%d", &p, &q);
    printf("Enter the elements in matrix2: ");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (n == p) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                mat3[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("The result of matrix multiplication is: \n");
        for (int i = 0; i < m; i++) { 
            for (int j = 0; j < q; j++) {
                printf("%d\t", mat3[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Cannot multiply\n");
    }

}

void matrixTranspose(int mat1[20][20]) {
    int m, n;
    printf("Enter the number of rows and columns of matrix1: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements in matrix1: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nElements in transpose matrix1 are:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", mat1[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int A[20][20], B[20][20], C[20][20];
    int ch;

    do {
        printf("\n1.Read a matrix\n");
        printf("2.Find sum of two matrices\n");
        printf("3.Find product of two matrices\n");
        printf("4.Find the transpose of matrix\n");
        printf("5.Exit\n");
        printf("\nEnter your choice(1-5): ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                readMatrix(A);

                break;

            case 2:
                sumMatrix(A, B);
                break;

            case 3:
                matrixProduct(A,B);
                break;

            case 4:
                matrixTranspose(A);
                break;

            case 5: 
                printf("Exiting.....\n");
                break;
            
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    while(ch != 5);

}