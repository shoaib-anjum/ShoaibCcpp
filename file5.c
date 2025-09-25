//Reading and writing from formatted file
#include<stdio.h>
int main()
{
    FILE *ptr;
    int cust_id,i;
    char cust_name[25];
    float amount;

    ptr=fopen("customer.txt","r");

    if(ptr==NULL)
    {
        printf("File I/O Error");
    }
    /*else
    {
        for(i=0;i<2;i++)
        {
        printf("\nEnter Customer Id: ");
        scanf("%d",&cust_id);
        fflush(stdin);
        printf("\nEnter Customer Name: ");
        scanf("%s",&cust_name);
        printf("\nEnter Customer Amount: ");
        scanf("%f",&amount);
        
        fprintf(ptr,"%d %s %f\n",cust_id,cust_name,amount);
        }
        

    }
    fclose(ptr);
    */
    
    else
    {
        while(fscanf(ptr,"%d %s %f",&cust_id,&cust_name,&amount)!=EOF)
        {
            printf("\n Customer Id: %d",cust_id);
            printf("\n Customer Name: %s",cust_name);
            printf("\n Customer Amount: %f",amount);
        }
    }
    fclose(ptr);
    
    

    return 0;
}
