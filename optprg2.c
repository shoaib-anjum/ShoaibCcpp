//Bitwise opt 
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    z=x & y;
    printf("\nThe value of z is: %d",z);
    z=x | y;
    printf("\nThe value of z is: %d",z);
    z=x ^ y;
    printf("\nThe value of z is: %d",z);
    z= x<<1;
    printf("\nThe value of z is: %d",z);
    z= y>>1;
    printf("\nThe value of z is: %d",z);
    z= ~x;
    printf("\nThe value of z is: %d",z);
    return 0;
}