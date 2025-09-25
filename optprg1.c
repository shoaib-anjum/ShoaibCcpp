//Assignment operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    //pre inc & dec
    c=++a;
    c=--b;
    printf("Increment value in c= %d\n",a);
    printf("Decrement value in c= %d\n",b);
    //post inc & dec
    c=a++;
    c=b--;
    printf("Increment value in c= %d\n",a);
    printf("Decremnt value in c= %d\n",b);

    return 0;
}