/*
Read temp of your city for 10 days from the user and store them into an array,display average temp
*/
#include<stdio.h>
int main()
{
    float temp[10],total=0,average;
    int i;
    printf("Enter 10 days temp: ");
    for(i=0;i<10;i++)
    {
        scanf("%f",&temp[i]);
        total+=temp[i];
        
    }
    for(i=0;i<10;i++)
    {
        printf("\nTemp[%d]=%.2f",i,temp[i]);
    }
    printf("\nTotal=%.2f",total);
    average=total/10;
    printf("\nAverage= %.2f",average);
    
    return 0;
}