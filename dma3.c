/*
DMA Realloc Calloc
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,i,n,r,f;
    printf("\n Enter the number of elements to allocate: ");
    scanf("%d",&n);

    ptr=(int *)calloc(n,sizeof(int));

    printf("\n Enter data to store at the memory: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\n Data stored at allocated memory: ");
    for(i=0;i<n;i++)
    {
        printf("\n %d",*(ptr+i));
    }
    /*
    ptr=(int *)malloc(n*sizeof(int));

    printf("\n Enter data to store at the memory: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\n Data stored at allocated memory: ");
    for(i=0;i<n;i++)
    {
        printf("\n %d",*(ptr+i));
    }

    ptr=(int *)realloc(ptr,r*sizeof(int));
    printf("\n Enter the new size: ");
    scanf("%d",&r);
    
    printf("\n Enter new data to store at reallocated memory: ");
    for(i=n;i<r;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\n Data stored after Reallocation: ");
    
    for(i=0;i<r;i++)
    {
        printf("\n %d",*(ptr+i));
    }

    printf("\n Enter the new (reduce): ");
    scanf("%d",&f);
    printf("\n New data (Reduced): ");
    
    for(i=0;i<f;i++)
    {
        printf("\n %d",*(ptr+i));
    }
    */

    return 0;
}