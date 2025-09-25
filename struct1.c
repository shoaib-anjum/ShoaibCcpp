#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int roll,marks[6];
        float total,percent;
        char name[50],grade[10];
    }s1,s2;

    int i;
    fflush(stdin);
    printf("\nEnter details first student:\n");
    printf("\nEnter student name: ");
    scanf("%s",&s1.name);
    printf("\nEnter student roll no: ");
    scanf("%d",&s1.roll);
    printf("\nEnter marks of 6 subjects: ");
    
    s1.total=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&s1.marks[i]);
        s1.total+=s1.marks[i];
    }
    s1.percent=s1.total/6.0;

    if(s1.percent>=75)
        strcpy(s1.grade,"A grade");
    else if(s1.percent>=60)
        strcpy(s1.grade,"B grade");
    else if(s1.percent>=50)
        strcpy(s1.grade,"C grade");
    else
        strcpy(s1.grade,"D grade");

    printf("\nStudent details is \n");
    printf("\nName= %s",s1.name);
    printf("\nRollno= %d",s1.roll);
    printf("\nTotal= %.2f",s1.total);
    printf("\nPercent= %.2f",s1.percent);
    printf("\nGrade= %s",s1.grade);


    fflush(stdin);
    printf("\n\nEnter details second student:\n");
    printf("\nEnter student name: ");
    scanf("%s",&s2.name);
    printf("\nEnter student roll no: ");
    scanf("%d",&s2.roll);
    printf("\nEnter marks of 6 subjects: ");
     
    s2.total=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&s2.marks[i]);
        s2.total+=s2.marks[i];
    }
    s2.percent=s2.total/6.0;

    if(s2.percent>=75)
        strcpy(s2.grade,"A grade");
    else if(s1.percent>=60)
        strcpy(s2.grade,"B grade");
    else if(s1.percent>=50)
        strcpy(s2.grade,"C grade");
    else
        strcpy(s2.grade,"D grade");

    printf("\nStudent details is \n");
    printf("\nName= %s",s2.name);
    printf("\nRollno= %d",s2.roll);
    printf("\nTotal= %.2f",s2.total);
    printf("\nPercent= %.2f",s2.percent);
    printf("\nGrade= %s",s2.grade);

    return 0;
}