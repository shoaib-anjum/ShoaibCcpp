//Size of opt
#include<stdio.h>
#include<string.h>
int main()
{
    int x=234;
    float y=45.67;
    char z='A';
    char str[35];
    strcpy(str,"Python");
    printf("\n%d",sizeof(x));
    printf("\n%d",sizeof(y));
    printf("\n%d",sizeof(z));
    printf("\n%d",sizeof(str));
    return 0;
}