#include <stdio.h>
struct Employee
{
    int empid;
    char name[50];
    int salary;
};

void main(){
    int n,i;
    struct Employee emp[50];

    printf("Enter the number of employees: "); 
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("Enter the details of employee%d\n",i+1);
        printf("Employee id:");
        scanf("%d",&emp[i].empid);
        printf("Employee name:");
        getchar();
        gets(emp[i].name);
        printf("Employee salary:");
        scanf("%d",&emp[i].salary);
    }

    printf("Employee Details\n");
    printf("Employee id, Employee name, Employee salary: \n");
    for(i=0;i<n;i++) {
        printf("%d\t%s \t\t%d\n", emp[i].empid, emp[i].name, emp[i].salary);
    }

} 
