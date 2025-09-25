/*
Write a function which reads array of temp of city as an argument and 
returns the maxium tremp.
*/

#include <stdio.h>

float max_temp(float arr[], int n) 
{
    float max=arr[0];
    int i;
    for(i=1;i<n;i++) 
    {
        if(arr[i]>max) 
        {
            max=arr[i];
        }
    }
    return max;
}

int main() 
{
    float temp[10];
    int i,N;

    printf("Enter 10 days temp:\n");
    for(i=0;i<10;i++) 
    {
        scanf("%f",&temp[i]);
    }

    for(i=0;i<10;i++) 
    {
        printf("Day %d temp = %.2f\n",i+1,temp[i]);
    }
    N=max_temp(temp,10);
    printf("\nMaximum temperature = %.2f\n",N);

    return 0;
}
