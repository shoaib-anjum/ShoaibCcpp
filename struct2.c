#include<stdio.h>
int main()
{
    struct book
    {
        int bid,price,qty;
        float amount;
        char bname[50],author[50];
    }b1,b2,b3,b4,b5;


    fflush(stdin);
    printf("\nEnter the details of book 1:\n ");
    printf("\nEnter book name: ");
    scanf("%s",&b1.bname);
    printf("\nEnter author name: ");
    scanf("%s",&b1.author);
    printf("\nEnter book id: ");
    scanf("%d",&b1.bid);
    printf("\nEnter price of book: ");
    scanf("%d",&b1.price);
    printf("\nEnter quantity: ");
    scanf("%d",b1.qty);
    
    b1.amount=b1.price*b1.qty;
    
    if(b1.amount>5000)
    {
        
    }
    return 0;
}