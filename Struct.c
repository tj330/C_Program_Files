#include <stdio.h>

struct Student {
    char name[30];
    int rollno;
    int mark1;
    int mark2;
    int mark3;
    int total;
    float avg;
};

void readStudent(struct Student s[], int n) {
    
    for (int i=0; i<n; i++) {
        printf("Enter the name of the Student%d :", i+1);
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter mark of first subject: ");
        scanf("%d", &s[i].mark1);
        printf("Enter mark of second subject: ");
        scanf("%d", &s[i].mark2);
        printf("Enter mark of third subject: ");
        scanf("%d", &s[i].mark3);
        s[i].total = s[i].mark1 + s[i].mark2 + s[i].mark3;
        s[i].avg = s[i].total/3;
    }
}

void printStudent(struct Student s[], int n) {
    for (int i=0; i<n; i++) {
        printf("Name of the Student%d :", i+1);
        puts(s[i].name);
        printf("Mark of first subject: %d\n", s[i].mark1);
        printf("Mark of second subject: %d\n", s[i].mark2);
        printf("Mark of third subject: %d\n", s[i].mark3);
       
        printf("Total marks: %d\n", s[i].total);
        printf("Average marks: %f\n", s[i].avg);
    }
}

int main() {
    struct Student s[10];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    readStudent(s, n);
    printStudent(s, n);
}