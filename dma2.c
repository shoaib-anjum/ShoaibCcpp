#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,n,i;
    printf("\n Enter the number of elements to allocate: ");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));
    printf("\nMemory is allocated at = %u",ptr);

    for(i=0;i<n;i++)
    {
        *(ptr+i)=i*100;
    }
    printf("\n First location = %u",*(ptr+0));
    printf("\n Second location = %u",*(ptr+1));
    printf("\n Third location = %u",*(ptr+2));

    free(ptr);
    printf("\n After Dealloctaion");

    for(i=0;i<n;i++)
    {
        printf("\n %d",*(ptr+i));
    }
    return 0;
}