/*
Matrix multiplication
*/
#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],i,j,r1,c1,r2,c2,k,c[5][5],sum;
    printf("\nEnter the order of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the order of second matrix: ");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2)
    {
        printf("\nMultiplication is not possible!");
    }
    else
    {
        printf("\nEnetr the first matrix %d elements: ",r1*c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("\nEnetr the second matrix %d elements: ",r2*c2);
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        printf("\nThe first matrix is\n\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%5d",a[i][j]);
            }
            printf("\n");
        }

        printf("\nThe second matrix is\n\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%5d",b[i][j]);
            }
            printf("\n");
        }
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<r2;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }
        printf("\nMultiplication of both matrix is:\n\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%5d",c[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}