#include <stdio.h> 

int main() {
    FILE *fp = NULL;

    char data[50];
    int line;

    fp = fopen("file.txt", "a");

    // printf("In file.txt\n");
    // printf("Enter the number of lines to be entered: ");
    // scanf("%d", &line);
    // getchar();
    // for(int i=0; i<line; i++ ) {
    //     fgets(data, sizeof(data), stdin);
    //     fputs(data, fp);
    // }

    // fclose(fp);

    fp = fopen("file.txt", "r");

    printf("%ld\n", ftell(fp));
    printf("Data in file.txt:\n");
    while(fgets(data, sizeof(data), fp)) {
        puts(data);
        printf("%ld\n", ftell(fp));
        
        
    }
    // rewind(fp);
    // fseek(fp, -5, SEEK_END);

    // fseek(fp, 20, SEEK_CUR);

    fseek(fp, 10, SEEK_SET);
    printf("%ld\n", ftell(fp));

    fclose(fp);
}