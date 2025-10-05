#include<stdio.h>

int a=0;

void ext()
{
    a++;
    printf("\n %d ",a);
}

int main()
{
    ext();
    printf("\n %d ",a);
    return 0;
}