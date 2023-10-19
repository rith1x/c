#include <stdio.h>

typedef struct student
{
    char name[30];
    int roll;
    double cgpa;
    double attendance;
    int phno;
    int age;
} stu;
void main()
{
    stu a[3];
    printf("Enter details of 3 students:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %lf %lf %d %d", &a[i].name, &a[i].roll, &a[i].cgpa, &a[i].attendance, &a[i].phno, &a[i].age);
    }
    for (int i = 0; i < 3; i++, printf("\n"))
    {
        printf("%s %d %lf %lf %d %d", a[i].name, a[i].roll, a[i].cgpa, a[i].attendance, a[i].phno, a[i].age);
    }
    for (int i = 0; i < 3; i++, printf("\n"))
    {
        if (a[i].cgpa >= 90 && a[i].attendance >= 75)
        {
            printf("Student Name: %s", a[i].name);
        }
    }
}