#include <stdio.h>
#include <string.h>

struct employee
{
    int empno;
    char empname[30];
    char department[20];
    int salary;
};

int main()
{
    struct employee emp[21];
    for (int i = 1; i <= 20; i++)
    {
        printf("Enter employee No. %d Name: ", i);
        scanf("%s", emp[i].empname);
        printf("Enter employee No. %d Department: ", i);
        scanf("%s", emp[i].department);
        printf("Enter employee No. %d Salary: ", i);
        scanf("%d", &emp[i].salary);
    }

    printf("No.\t Name\t Department\t Salary\n");
    for (int i = 1; i <= 20; i++)
    {
        printf("%d\t %s\t %s\t %d\t\n", i, emp[i].empname, emp[i].department, emp[i].salary);
    }

    return 0;
}
