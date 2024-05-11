#include<stdio.h>
void removeFirst(int *A,int *n){
    for(int i=0;i<*n;i++){
        A[i]=A[i+1];
    }
    (*n)--;
}
void removeLast(int *A,int *n){
    (*n)--;
}
void printArray(int *A,int *n){
    printf("The array Elements are:\n");
    for(int i=0;i<*n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}
void main(){
    int n,op,A[20];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printArray(A,&n);
    printf("Enter choice:\n\t1.Remove First\n\t2.Remove last\n");
    scanf("%d",&op);
    switch(op){
        case 1:
            removeFirst(A,&n);
            printArray(A,&n);
            break;
        case 2:
            removeLast(A,&n);
            printArray(A,&n);
            break;
        default:
            printf("Enter a valid input\n");
    }
}