#include<stdio.h>

int main()
{
    struct Product
    {
        int pid,qty;
        float price,amount;
        char pname[20];
    };
    struct Customer
    {
        int cid,pc;
        char cname[50],city[50];
        float total_amount,discount,after_discount;
        struct Product p[10];
    }c[5];

    int i,j,cn;

    printf("\nEnter no of Customers: ");
    scanf("%d",&cn);
    printf("\nEnter details of %d Customers:\n",cn);
    
    for(i=0;i<cn;i++)
    {
        printf("\nEnter Customer id: ");
        scanf("%d",&c[i].cid);
        fflush(stdin);
        printf("\nEnter Customer name: ");
        scanf("%s",&c[i].cname);

        fflush(stdin);
        printf("\nEnter Customer city: ");
        scanf("%s",&c[i].city);

        printf("\nEnter no of products: ");
        scanf("%d",&c[i].pc);

        printf("\nEnter details of %d Products:\n",c[i].pc);


        c[i].total_amount=0;
        for(j=0;j<c[i].pc;j++)
        {
            
            printf("\nEnter Product Id: ");
            scanf("%d",&c[i].p[j].pid);
            fflush(stdin);
            printf("\nEnter Product name: ");
            scanf("%s",&c[i].p[j].pname);
            printf("\nEnter Product price: ");
            scanf("%f",&c[i].p[j].price);
            printf("\nEnter Product quantity: ");
            scanf("%d",&c[i].p[j].qty);
            c[i].p[j].amount=c[i].p[j].price*c[i].p[j].qty;
            c[i].total_amount+=c[i].p[j].amount;
        }
        if(c[i].total_amount>=25000)
        {
            c[i].discount=0.1*c[i].total_amount;
        }
        else
        {    
            c[i].discount=0.05*c[i].total_amount;
        }
        c[i].after_discount=c[i].total_amount-c[i].discount;
    }
    printf("\nCustomer details:\n");
    
    for(i=0;i<cn;i++)
    {
        printf("\nCustomer id= %d",c[i].cid);
        printf("\nCustomer Name= %s",c[i].cname);
        printf("\nCustomer City= %s",c[i].city);

        printf("\n\nProduct details:\n");
        for(j=0;j<c[i].pc;j++)
        {
            printf("\nProduct Id= %d",c[i].p[j].pid);
            printf("\nProduct Name= %s",c[i].p[j].pname);
            printf("\nProduct Price= %.2f",c[i].p[j].price);
            printf("\nProduct Quantity= %d",c[i].p[j].qty);
            printf("\nProduct Amount= %.2f",c[i].p[j].amount);
        }
        printf("\n\n Total= %.2f",c[i].total_amount);
        printf("\n Discount= %.2f",c[i].discount);
        printf("\n Net= %.2f",c[i].after_discount);
        
    }

    return 0;
}