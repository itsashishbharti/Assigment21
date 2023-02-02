#include<stdio.h>
struct  Employee
{
    int id;
    int salary;
    char name[20];
};

int main()
{
    int n;
    printf("\n How Much You want to add Record=");
    scanf("%d",&n);
    struct Employee e[n];
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
         printf("\n Enter Your Name");
         gets(e[i].name);
         fflush(stdin);
         printf("\nEnter Your Id=");
         scanf("%d",&e[i].id);
         printf("\n Eneter Your Salary=");
         scanf("%d",&e[i].salary);
    }
    printf("\n\n");
    for(int i=0;i<10;i++)
    {
    printf("\nName=%s",e[i].name);
    printf("\nID:-%d",e[i].id);
    printf("\nSalary:-%d",e[i].salary);
        printf("\n");
    }
}