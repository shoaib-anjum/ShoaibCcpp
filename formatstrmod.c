//format strings modifiers
#include<stdio.h>
#include<string.h>
int main()
{
    int x=150;
    float y=567.645367;
    char z='R';
    char username[25];
    strcpy(username,"shoaibanjum");
    
    printf("%d",x);
    printf("\n%5d",x);
    printf("\n%-10o",x);
    printf("%f",y);
    printf("\n%-f",y);
    printf("\n%15f",y);
    printf("\n%.2f",y);
    printf("\n%c",z);
    printf("\n%6c",z);

    printf("\n%-15s",username);
    printf("%-15s",username);
    printf("%-15s",username);
    printf("%-15s",username);
    printf("%-15s",username);
    return 0;
}