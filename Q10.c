#include<stdio.h>
struct marked
{
    int roll;
    char name[20];
    int chem_marks,phy_marks,math_marks;
}st[5];
int main()
{
    input();
    display();
    return 0;
}
input()
{
    for(int i=0;i<5;i++)
    {
        printf("\n Student Name=");
        gets(st[i].name);
        fflush(stdin);
        printf("\n Roll.no=");
        scanf("%d",&st[i].roll);
        printf("Chemistry Marks=");
        scanf("%d",&st[i].chem_marks);
        printf("\nPhysics Marks=");
        scanf("%d",&st[i].phy_marks);
        printf("\nMath Marks=",&st[i].math_marks);
    }
}
int display()
{
    float tp;
    for(int i=0;i<5;i++)
    {
        printf("\nName=%s",st[i].name);
        printf("\nRoll.No=%d",st[i].roll);
        printf("\nPercentage=%f %",tp=((st[i].math_marks*st[i].phy_marks*st[i].chem_marks)/5));
    }
    
}
