/*
Fibonaccii number
*/
#include<stdio.h>

int fib(int n)

{
    int f;
    if(n==0 || n==1)
        return 1;
    else
        f=fib(n-1)+fib(n-2);
        return f;

}



int main()
{
    int N,F;
    printf("\nEnter the number: ");
    scanf("%d",&N);
    F=fib(N);
    printf("\nThe fibonaccii number of %d = %d",N,F);
    return 0;
}