#include<stdio.h>
int main()
{
    int x,*p1;
    float y,*p2;
    char z,*p3;

    x=200;
    p1=&x;
    printf("\nAddress of x is: %d",p1);

    y=200.23;
    p2=&y;
    printf("\nAddress of y is: %d",p2);

    z='Z';
    p3=&z;
    printf("\nAddress of z is: %d",p3);

    printf("\n\nValue of x at address p1 is: %d",*p1);
    printf("\nValue of y at address p2 is: %.2f",*p2);
    printf("\nValue of z at address p3 is: %c",*p3);

    return 0;
}