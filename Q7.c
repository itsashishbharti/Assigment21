#include<stdio.h>
int main()
{
    int h,m,s,h1,m1,s1,h2,m2,s2;
    printf("Enter 1st Time(HH:MM:SS)= ");
    scanf("%d:%d:%d",&h,&m,&s);
    printf("Enter 2nd Time(HH:MM:SS)= ");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    if(s<s1)
    {
        m--;
        s=s+60;
        h2=h-h1;
        m2=m-m1;
        s2=s-s1;
        printf("\nDifference Time HH:MM:SS:-%d:%d:%d",h2,m2,s2);
    }
    else if(m<m1)
    {
        h--;
        m=m+60;
         h2=h-h1;
        m2=m-m1;
        s2=s-s1;
        printf("\nDifference Time HH:MM:SS:-%d:%d:%d",h2,m2,s2);
    }
    else
    {
         h2=h-h1;
        m2=m-m1;
        s2=s-s1;
        printf("\n Difference Time HH:MM:SS:-%d:%d:%d",h2,m2,s2);
    }
    return 0;
}