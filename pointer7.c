//Array function pointer

#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int div(int a,int b)
{
    return a/b;
}

int mux(int a,int b)
{
    return a*b;
}

int main()
{
    int (*ptr[4])(int,int),i;
    ptr[0]=add;
    ptr[1]=sub;
    ptr[2]=div;
    ptr[3]=mux;

    for(i=0;i<4;i++)
    {
        printf("\n %d ",ptr[i](50,5));
    }

    return 0;
}