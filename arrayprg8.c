/*
Compare two array and stort the larger element into a third array
*/
#include<stdio.h>
int main()
{
    int a1[6]={23,34,45,88,65,345},i;
    int a2[6]={34,45,56,76,87,98},j;
    int n,large[6],temp;
    

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a1[i]>a2[j])
            {
                temp=a1[i];
                a1[i]=a1[j];
                a1[j]=temp;
            }
            if(a2[i]>a2[j])
            {
                temp=a2[i];
                a2[i]=a2[j];
                a2[j]=temp;
            }
        }
    }
    printf("\nThe first array is: ");
    for(i=0;i<6;i++)
    {
        printf("%5d",a1[i]);
    }
    printf("\nThe second array is: ");
    for(i=0;i<6;i++)
    {
        printf("%5d",a2[i]);
    }

    for(i=0;i<5;i++)
    {
        if(a1[i]>a2[i])
        {
            large[i]=a1[i];
        }
        else
        {
            large[i]=a2[i];
        }
    }
    printf("\nThe largest array is: ");
    for(i=0;i<6;i++)
    {
        printf("%5d",large[i]);
    }


    
    return 0;
}