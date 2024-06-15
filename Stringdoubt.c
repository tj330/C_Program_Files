#include <stdio.h> 

void length(char str1[]) {
    int count=0;

    for (int m = 0; str1[m] != '\0'; m++) {
        count++;
    }

    printf("%d", count);

}

void main() {
    char str1[15], str2[10], m, n;
    printf("Enter the first string: ");
    
    fgets(str1, sizeof(str1), stdin);

    puts(str1);

    length(str1);
}