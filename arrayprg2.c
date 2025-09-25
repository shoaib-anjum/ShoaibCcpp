#include<stdio.h>
int main()
{
    float sub[6],total,percent;
    int i;
    printf("Enetr marks of 6 subject: ");
    for(i=0;i<6;i++)
    {
        scanf("%f",&sub[i]);
        printf("\nMarks in Sub[%d]=%.2f",i,sub[i]);
        total+=sub[i];
    }
    printf("\nTotal Marks=%.2f",total);
    percent=total/6.0;
    printf("\nPercent=%.2f",percent);
    return 0;
}