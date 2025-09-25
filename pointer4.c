#include<stdio.h>
#include<string.h>

struct consumer
{
    int cid,unit;
    char c_name[50],city[50];
    float amount;

}c[50];

void displayall(struct consumer *ptr,int n)
{
    int i;
    float total=0;
    for(i=0;i<n;i++)
    {
        printf("\n Id= %d \t Name= %s \t City= %s \t Units= %d \t Amount= %.2f ",c[i].cid,c[i].c_name,c[i].city,c[i].unit,c[i].amount);
        total+=c[i].amount;   
    }
    printf("\n Total amount of %d Customers= %.2f",n,total);
}

void sort(struct consumer *ptr, int n)
{
    int i, j;
    struct consumer temp;

    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (ptr[i].amount>ptr[j].amount) 
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}

void bill(struct consumer *ptr, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(ptr[i].amount>=2000)
        {
            printf("\nThe Consumer with 2000 and more bill =%.2f",ptr[i].amount);
        }
        else
            printf("\nThe amount is less");
        
    }
    
}

void alpha(struct consumer *ptr, int n)  
{
    int i, j;
    struct consumer temp;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(ptr[i].c_name, ptr[j].c_name) > 0)  
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}


int main()
{
    int n,i;
    printf("\nEnter the no of Customers: ");
    scanf("%d",&n);

    printf("\nEnter %d Customers details :\n ",n);


    for(i=0;i<n;i++)
    {
        printf("\nEnter Customer Id: ");
        scanf("%d",&c[i].cid);

        printf("\nEnter Customer name: ");
        scanf("%s",&c[i].c_name);

        printf("\nEnter Customer city: ");
        scanf("%s",&c[i].city);

        printf("\nEnter Unit consumed: ");
        scanf("%u",&c[i].unit);

        c[i].amount=150;
        if(c[i].unit<=200)
            c[i].amount+=(c[i].unit)*2;

        else if(c[i].unit<=400)
            c[i].amount+=400+(c[i].unit-200)*4;

        else if(c[i].unit<=600)
            c[i].amount+=400+800+(c[i].unit-400)*6;
        
        else
            c[i].amount+=400+800+1200+(c[i].unit-600)*8;
    }

    displayall(&c[0],n);

    sort(c, n);
    printf("\n\nAfter Sorting:\n");
    displayall(c, n);

    printf("\nConsumer with amount>=2000");
    bill(&c[0],n);

    alpha(c,n);
    printf("\n\nAfter Sorting Alphabetically :\n");
    displayall(c,n);
    
    
    return 0;
}