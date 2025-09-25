#include<stdio.h>

struct customer
    {
        int cid;
        char cname[50];
        float bill_amount,paid_amount,balance_amount;    
    }c1, *ptr,c[2];

void displayAllAmounts(struct customer *p)
{
    float total_bill_amount=0,total_paid=0,total_balance=0;
    int i;
    for(i=0;i<2;i++)
    {
        total_bill_amount+=(p+i)->bill_amount;
        total_paid+=(p+i)->paid_amount;
        total_balance+=(p+i)->balance_amount;
    }
    printf("\n\nTotal Data:\n");
    printf("\nTotal Bill Amount= %.2f",total_bill_amount);
    printf("\nTotal Paid Amount= %.2f",total_paid);
    printf("\nTotal Balance Amount= %.2f",total_balance);

}


int main()
{
    int i;
    
    for(i=0;i<2;i++)
    {
        printf("\nEnter the customer details:\n");
        printf("\nEnter the customer id: ");
        scanf("%d",&c[i].cid);
        printf("\nEnter the customer name: ");
        scanf("%s",&c[i].cname);
        printf("\nEnter the Bill amount: ");
        scanf("%f",&c[i].bill_amount);
        printf("\nEnter the Paid amount: ");
        scanf("%f",&c[i].paid_amount);
        c[i].balance_amount=c[i].bill_amount-c[i].paid_amount;
    }
    

    ptr=&c[0];
    printf("\nAll details:\n");

    for(i=0;i<2;i++)
    {
        printf("\n\nCustomer id: %d",(ptr+i)->cid);
        printf("\nCustomer Name: %s",(ptr+i)->cname);
        printf("\nCustomer Bill amount: %.2f",(ptr+i)->bill_amount);
        printf("\nCustomer Paid amount: %.2f",(ptr+i)->paid_amount);
        printf("\nCustomer Balance amount: %.2f",(ptr+i)->balance_amount);
    }
    displayAllAmounts(&c[0]);

    return 0;
}