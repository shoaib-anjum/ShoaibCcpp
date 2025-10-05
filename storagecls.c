#include<stdio.h>

void display()
{
    register int x=100;
    //int x=100;
    printf("\n Display %d ",x);
}
int main()
{
    int a=25,b;
    display();
    printf("\n main %d",a);
    printf("\n garbage %d",b);
    return 0;
}