#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3];   
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent Details:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d", i + 1);
        printf("\nRoll No = %d", s[i].rollno);
        printf("\nName = %s", s[i].name);
        printf("\nMarks = %.2f\n", s[i].marks);
    }
}



