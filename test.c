#include <stdio.h>
#include <math.h>

void main() {
    int A[20][20];
    int ch, m, n ,p, q, sum=0, DSum=0, LSum=0, rsum=0, csum=0;
    
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &m,&n);
    printf("Enter the elements in matrix A: ");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
            sum += A[i][j];
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            rsum = rsum + A[i][j];
        }
        printf("Sum of the %d row is = %d\n", i, rsum);
        rsum = 0;
    }

    for (int j=0; j<n; j++) {
        for (int i=0; i<m; i++) {
            csum = csum + A[i][j];
        }
        printf("Sum of the %d column is = %d\n", j, csum);
        csum = 0;
    }
}
