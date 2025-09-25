/*
If Statement

Checks greater number between two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",b,a);
    }

    return 0;
    
}

Checks greater no among three numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is greater than %d and %d",a,b,c);
    }
    if(b>a && b>c)
    {
        printf("%d is greater than %d and %d",b,a,c);
    }
    if(c>a && c>b)
    {
        printf("%d is greater than %d and %d",c,a,b);
    }
    return 0;
}

Checks vowel or not
#include<stdio.h>
int main()
{
    char x;
    printf("Enter any lowercase alphabet: ");
    x=getchar();
    if(x='a' || x='e' || x='i' || x='o' || x='u')
    {
        printf("%c is a vowel",x);
    }
    else
    {
        printf("%c is a consonant",x);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    char x;
    printf("Enter any alphabet: ");
    scanf("%c",&x);

    if(x<=65 && x>=90)
    {
        printf("%c is uppercase",x);
    }
    else
    {
        printf("%c is lowercase",x);
    }
    

    return 0;
}