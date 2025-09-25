/*
Price and qty
*/
//Conditional opt
#include<stdio.h>
int main()
{
    int price,qty,final_amount;
    float amount,discount;
    printf("Enter the price and quantity of the Product: ");
    scanf("%d%d",&price,&qty);
    amount=price*qty;
    discount=(amount>=5000)?amount*0.1:amount*0.05;
    final_amount=amount-discount;
    printf("The product billing is: ");
    printf("%.2d%10.2d%10.2f%10.2f%10.2d",price ,qty ,amount ,discount ,final_amount);
    return 0;
}