#include<stdio.h>

void marks(int *p)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(*(p+i)>=100)
            *(p+i)=1;
        else
            *(p+i)=-1;
    }

}

int main()
{
    int i,a[10];
    printf("\nEnter 10 students CET marks: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    marks(&a[0]);
    for(i=0;i<10;i++)
    {
        printf("%5d",a[i]);
    }
    return 0;
}