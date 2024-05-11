#include<stdio.h>

void main(){
    int n, num;
    FILE *fp = NULL;
    fp = fopen("file.txt","w");

    printf("Enter the limit: ");
    scanf("%d",&n);

    printf("Enter the numbers: ");
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        putw(num,fp);
    }
    fclose(fp);

    fopen("file.txt","r");
    printf("Data in file.txt are: ");
    while((num=getw(fp))!=EOF){
        printf("%d\t",num);
    }
    printf("\n");
    fclose(fp);
}
