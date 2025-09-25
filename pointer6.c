//Functio pointer

#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

float div(int a,int b)
{
    return (float)a/b;
}
int main()
{   
    int (*ptr)(int,int);
    float (*ptr1)(int,int);
    ptr=add;
    printf("\n Addition: %d",ptr(8,8));

    ptr1=div;
    printf("\n Division: %d",ptr1(8,8));
    
    return 0;
}