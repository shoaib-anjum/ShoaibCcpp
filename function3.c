/*
Avaerage
*/

#include<stdio.h>

float average(int a[])
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    return sum/5.0;
}
int main()
{
    int x[5]={12,34,46,57,75};
    float avg;
    avg=average(x);
    printf("\nAverage is: %.2f",avg);

    return 0;
}