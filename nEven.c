#include<stdio.h>
void main(){
    FILE *fp = NULL;
    int n;

    fp=fopen("file.txt","r");
    printf("The even numbers in file.txt are: ");
    while((n=getw(fp))!=EOF){
        if(n%2==0){
            printf("%d\t",n);
        }
    }
    printf("\n");
    fclose(fp);
}
