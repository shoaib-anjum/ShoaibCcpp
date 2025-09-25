
#include<stdio.h>
int main()
{
    int n,i,array[20],even[20],odd[20],e,o;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the numbers: ",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
     
    printf("\nFinal array is\n",n);

    for(i=0;i<n;i++)
    {
        printf("%5d",array[i]);
    }

    e=0;
    o=0;

    for(i=0;i<n;i++)
    {
        if(array[i]%2==0)
        {
            even[e]=array[i];
            e++;

        }
        else
        {
            odd[o]=array[i];
            o++;

        }
    }
    printf("\nEven array is\n ");
    for(i=0;i<e;i++)
    {
        printf("%5d",even[i]);
    }

    printf("\nEven array is\n ",odd[i]);

    for(i=0;i<o;i++)
    {
        printf("%5d",odd[i]);
    }

    return 0;
}