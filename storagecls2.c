#include<stdio.h>

void count()
{
    static int a=0;
    a++;
    printf("\n %d ",a);
}

int main()
{
    count();
    count();
    count();
    count();
    count();

    return 0;
}