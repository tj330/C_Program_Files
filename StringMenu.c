#include <stdio.h>
#include <string.h>

int main() {
    int ch, m, n, i, subCh, flag=1, vow=0, cons=0, space=0;
    char str[20], str2[10];
    printf("Enter the first string: ");
    gets(str);
    for (n = 0; str[n] != '\0'; n++);

    do {
        printf("\n1.Palindrome\n");
        printf("2.String Concatenation\n");
        printf("3.String Copy\n");
        printf("4.Count of vowels,consonants & Spaces in string\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:  
                printf("Subchoice:\n");
                printf("1. Reverse\n2. Palindrome\n");
                printf("Enter your choice: ");
                
                scanf("%d", &subCh);
                if (subCh == 1) {
                    
                    int start = 0; 
                    int end = n - 1; 
                    while (start < end) { 
                        char temp = str[start]; 
                        str[start] = str[end]; 
                        str[end] = temp; 
                        start++; 
                        end--; 
                    }
                    printf("Reversed string is: ");
                    puts(str);
                }
                else if (subCh == 2) {
                    for (i = 0; str[i] != '\0'; i++);
                    for (int j=0; j<i/2; j++) {
                        if (str[j] != str[i-j-1]) {
                            flag=0;
                            break;
                        }
                    }

                    if (flag == 1) {
                        printf("Entered string is a palindrome");
                    }
                    else {
                        printf("Entered string is not a palindrome");
                    }
                }
                
                
                break;

            case 2:
                printf("Subchoice:\n");
                printf("1.Using builtin function\n2. Without using builtin function\n");
                printf("Enter your choice: ");
                scanf("%d", &subCh);

                if (subCh == 1) {
                    getchar();
                    printf("Enter the second string: ");
                    gets(str2);
                    strcat(str, str2);
                    printf("Concatenated string is: ");
                    puts(str);
                } 
                else if (subCh == 2) {
                    getchar();
                    printf("Enter the second string: ");
                    gets(str2);

                    for (m = 0; str2[m] != '\0'; m++);

                    for (int i=0; i<m; i++) {
                        str[n+i] = str2[i];
                    }
                    str[m+n]='\0';
                    printf("Concatenated string is:  ");
                    puts(str);
                }
                break;

            case 3:
                printf("Subchoice:\n");
                printf("1. Using builtin function\n2. Without using builtin function\n");
                printf("Enter your choice: ");
                scanf("%d",&subCh);
                if (subCh == 1) {
                    strcpy(str2,str);
                    printf("The copied string is: ");
                    puts(str2);
                } 
                else if (subCh == 2) {
                    for (i=0; i<n; i++) {
                        str2[i] = str[i];
                    }
                    str2[i] = '\0';

                    printf("The copied string is: ");
                    puts(str2);
                }
                break;

            case 4:
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
                break;

            case 5:
                printf("Exiting\n");
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    } while (ch != 5);

    return 0;
}