/*
Recursion 
*/
#include<stdio.h>

int fact(int n)
{
    int f;
    if(n==1)
        return 1;
    else
        f=n*fact(n-1);
        return f;
}


int main()
{
    int N,F;
    printf("nEnter the number: ");
    scanf("%d",&N);
    F=fact(N);
    printf("\nFactorial of %d = %d ",N,F);

    return 0;
}