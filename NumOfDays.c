#include <stdio.h>
void main() {
    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;

    case 2:
        printf("28 days in normal year, 29 days in leap year");
        break;
    
    default:
        printf("30 days");
        break;
    }
}