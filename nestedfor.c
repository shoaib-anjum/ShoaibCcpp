/*
Implement the following patter using nested for loop:
*
* *
* * *
* * * *
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");

        }
        printf("\n");
    }
    return 0;
}
2:
* * * 
* *
* 
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        { 
            printf("* ");
        
        }
        printf("\n");
    }
    return 0;
}
1 
1 2
1 2 3

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%-5d",j);

        }
        printf("\n");
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        { 
            printf("%-5d",j);
        
        }
        printf("\n");
    }
    return 0;
}