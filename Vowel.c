#include <stdio.h>
void main() {
    int i, vow=0, cons=0, space=0;
    char str[20];
    printf("Enter the alphabet to check: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u' || str[i] == 'A' || str[i] =='E' || str[i] =='I' || str[i] =='O' || str[i] =='U') {
            vow++;
        }
        else if(str[i] == ' ') {
            space++;
        }
        else {
            cons++;
        }
    }

    printf("Count of vowels: %d\n", vow);
    printf("Count of space: %d\n", space);
    printf("Count of consonants: %d\n", cons);
}