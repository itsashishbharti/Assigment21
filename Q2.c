#include<stdio.h>
int input();
struct Employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    input();
}
int input()
{
    struct Employee e;
    printf("\n Enter Your Name");
    gets(e.name);
    fflush(stdin);
    printf("\nEnter Your Id=");
    scanf("%s",&e.id);
    printf("\n Eneter Your Salary=");
    scanf("%d",&e.salary);
}