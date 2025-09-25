/* 2D array 
Taketwo 2d array from user and add both array 

*/
#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],i,j,r1,r2,c1,c2;
    printf("\n Enter the order first array : ");
    scanf("%d%d",&r1,&c1);
    printf("\n Enter the order second array : ");
    scanf("%d%d",&r2,&c2);

    if(r1==r2 && c1==c2)
    {
        printf("\nEnter the %d elements of first array: ",r1*c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("\nEnter the %d elements of second array: ",r2*c2);
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        printf("\nThe first array\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%5d",a[i][j]);
            }
            printf("\n");
        }
        printf("\nThe second array\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%5d",b[i][j]);
            }
            printf("\n");
        }
        printf("\nAddition of both array\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%5d",a[i][j]+b[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("\nThe order of arrays is different");
        printf("\nCannot perform addition!");
    }



    return 0;
}