/*
Create 2d array(Matrix) of order 3 4 and display 
it in matrix form on screen 
*/
#include<stdio.h>
int main()
{
    int a[3][4],i,j,r=3,c=4;
    printf("\n2D Array of order 3 4");
    printf("\nEner the %d elements: ",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe array is\n");
    

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}