/*
Write a function which reads 3 numbers from user and 
returns the highest number.
*/
#include<stdio.h>

int max_num(int arr[],int n)
{
    int max=arr[0],i;
    for(i=0;i<n;i++)
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
    int num[3];
    int i,N;
    printf("\nEnter 3 nmbers: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("\nThe number is: %d",num[i]);
    }
    N=max_num(num,3);
    
    printf("\nThe highest number among them is: %d",N);
    return 0;
}