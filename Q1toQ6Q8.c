#include<stdio.h>
#include<string.h>
int input();
int display();
int max();
int sort();
int sortname();
struct Employee
{
    int id;
    char name[20];
    int salary;
}e[10];
int main()
{
    input();
    display();
    max();
    sort();
    display();
    sortname();
    display();
}
int input()
{
    for(int i=0;i<10;i++)
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
}
int display()
{
    for(int i=0;i<10;i++)
    {
    printf("\nName=%s",e[i].name);
    printf("\nID:-%d",e[i].id);
    printf("\nSalary:-%d",e[i].salary);
    }
}
int max()
{
    
    int max=0,temp;
    for(int i=0;i<10;i++)
    {
        if(max<e[i].salary)
        {
            max=e[i].salary;
            temp=i;
        }
    }
     printf("\nName=%s",e[temp].name);
    printf("\nID:-%d",e[temp].id);
    printf("\nSalary:-%d",e[temp].salary);
}
int sort()
{
    int tid,tsalary;
    char tname[20];
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                tid=e[i].id;
                tsalary=e[i].salary;
                strcpy(tname,e[i].name);
                e[i].id=e[j].id;
                e[i].salary=e[j].salary;
                strcpy(e[i].name,e[j].name);
                 e[j].id=tid;
                e[j].salary=tsalary;
                strcpy(e[j].name,tname);
            }
        }
    }
}
int sortname()
{
     int tid,tsalary;
    char tname[20];
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(e[i].name,e[j].name)>0)
            {
                tid=e[i].id;
                tsalary=e[i].salary;
                strcpy(tname,e[i].name);
                e[i].id=e[j].id;
                e[i].salary=e[j].salary;
                strcpy(e[i].name,e[j].name);
                 e[j].id=tid;
                e[j].salary=tsalary;
                strcpy(e[j].name,tname);
            }
        }
    }
}