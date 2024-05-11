#include <stdio.h>

int main() {
    FILE *fp = NULL;
    int line;
    char data[50], data1[50];

    fp = fopen("source.txt", "w");
    
    printf("Enter the number of lines to be entered: ");
    scanf("%d", &line);

    getchar();

    printf("Enter data to be written in demo.txt:\n");
    for (int i = 0; i < line; i++) {
        fgets(data, sizeof(data), stdin);
        fputs(data, fp);
    }

    fclose(fp);

    // fp = fopen("source.txt", "r");

    // printf("\nData in source.txt:\n");
    
    // while (fgets(data1, sizeof(data1), fp) ) {
    //     puts(data1);
    // }
    
    // fclose(fp);
    return 0;
}
