/*
Callby pointer 
*/
#include <stdio.h>

int value(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nAfter swap");
    printf("\nx=%d",*x);
    printf("\ny=%d",*y);
    return 0;
}


int main()
{
    int a = 100, b = 500;
    printf("\nBefore swap");
    printf("\nx=%d",a);
    printf("\ny=%d",b);
    value(&a,&b); //funtion call

    return 0;
}