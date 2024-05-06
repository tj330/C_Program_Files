#include <stdio.h>
void main() {
    int mark;
    printf("Enter the mark of the student: ");
    scanf("%d", &mark);
    if (mark >= 90) {
        printf("Grade is A+");
    }
    else if (mark < 90 && mark >= 80) {
        printf("Grade is A");
    }
    else if (mark < 80 && mark >= 70) {
        printf("Grade is B");
    }
    else if (mark < 70 && mark >= 60) {
        printf("Grade is C");
    }
    else if (mark < 60 && mark >= 50) {
        printf("Grade is D");
    }
    else {
        printf("Grade is F");
    }
}