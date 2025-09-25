/*
1: Factorial of a number
#include<stdio.h>
int main()
{
    int n,f=1,i;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nFactorial of %d = %d",n,f);
    return 0;
}
2: Find number raised to another number

#include<stdio.h>
int main()
{
    int i,n,p,r=1;
    printf("\nEnter the number and power: ");
    scanf("%d%d",&n,&p);
    for(i=1;i<=p;i++)
    {
        r=r*n;
    }
    printf("\n %d raised to %d = %d",n,p,r);
    return 0;
}
3: Find number raised to itself

#include<stdio.h>
int main()
{
    int i,n,r=1;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=r*n;
    }
    printf("\n %d raised to itself = %d",n,r);

    return 0;
}
4: Check if a number is prime or not

#include<stdio.h>
int main()
{
    int n,d;
    printf("\nEnter the Number: ");
    scanf("%d",&n);
    for(d=2;d<=n/2;d++)
    {
        if(n%d==0)
        {
        printf("\n%d is not a prime number",n);
        break;
        }    
    }
    
    if(d>n/2)
    {
    printf("\n%d is a prime number",n);
    }
    return 0;
}
*/
