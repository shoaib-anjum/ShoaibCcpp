#include<stdio.h>
int main()
{
    int m[10][10],i,j,n,o,sum=0;
    char s;
    printf("\nEnetr thr order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the %d elements: ",n*n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    printf("The matrix is:\n\n ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",m[i][j]);
        }
        printf("\n\n");
    }
    while(1)
    {
        printf("\n");
        printf("\n1: Make all diagonal elements is 1 ");
        printf("\n2: Calculate sum of all upper traingle elements ");
        printf("\n3: Make all upper triangle and lower triangle elements as 0 ");
        printf("\n4: Calculate sum of all lower triangle elements ");
        printf("\n5: Find transpose of matrix ");

        printf("\n\nType an option: ");
        scanf("%d",&o);

        switch(o)
        {
            case 1:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==j)
                        m[i][j]=1;
                    printf("%5d",m[i][j]);
                }
                printf("\n\n");
            }
            break;

            case 2:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i<j)
                        sum=sum+m[i][j];  
                }
            }
            printf("\nThe sum of upper triangle elements= %d",sum);
            break;

            case 3:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==j)
                    printf("%5d",m[i][j]);
                      
                }
            }
            break;

            case 4:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i>j)
                        sum=sum+m[i][j];  
                }
            }
            printf("\nThe sum of lower triangle elements= %d",sum);
            break;

            case 5:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%5d",m[j][i]);  
                }
                printf("\n\n");
            }
            break;

            default:
            printf("\nInvalid Option select between 1 to 5");
            break;
        }
    }
    fflush(stdin);
    printf("\nTo stope enter s/S: ");
    getchar();

    return 0;
}