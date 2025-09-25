#include<stdio.h>
#include<string.h>
int main()
{
    int x=25,y=50,z;
    //Assigment opt
    x+=10;
    printf("\n x= %d",x);
    y-=25;
    printf("\n y= %d",y);
    x*=2;
    printf("\n x= %d",x);
    y/=2;
    printf("\n y= %d",y);

    //Increment decrement opt
    //postfix
    z=x++;
    printf("\n");
    printf("\n z= %d \t x= %d",z,x);
    
    z=y--;
    printf("\n z= %d \t y= %d",z,y);
    //prefix
    z=++x;
    printf("\n");
    printf("\n z= %d \t x= %d",z,x);
    z=--y;
    printf("\n z= %d \t y= %d",z,y);

    //Bitwise opt

    return 0;
}