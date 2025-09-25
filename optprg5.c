//Conditional opt
#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,total;
    float percent;
    char grade;
    printf("Enter the marks of 3 subjects: ");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    total=sub1+sub2+sub3;
    percent=total/3.0;
    grade=(percent>=70)?'A':(percent>=60)?'B':(percent>=50)?'C':'D';
    printf("\nTotal= %d",total);
    printf("\nPercent= %.2f",percent);
    printf("\nGrade= %c",grade);

    return 0;
}