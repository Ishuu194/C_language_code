#include <stdio.h>
struct emp
{
    int id;
    char name[20];
    float salary;
} e1;

int main()
{
    int id;
    char name[20];
    float salary;

    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    e1.id = id;
    strcpy(e1.name, name);
    e1.salary = salary;

    printf("\nEmployee Details");
    printf("\nID = %d", e1.id);
    printf("\nName = %s", e1.name);
    printf("\nSalary = %.2f", e1.salary);
}
