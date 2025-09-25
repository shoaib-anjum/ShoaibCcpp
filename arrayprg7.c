/*
Read n numbers form user and sort it to decsending order 
*/
#include<stdio.h>
int main()
{
    int a[20],n,i,j,temp;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe actual Array is\n",n);
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
    printf("\nArrat=y in ascending order\n");
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%5d",a[i]);
    }
    
    return 0;
}