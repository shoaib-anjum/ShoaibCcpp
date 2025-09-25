/*Print prime number from 1 to 100 using while*/
#include <stdio.h>

int main()
{
    int n, d;
    //printf("\nEnter a number: ");
    //scanf("%d", &n);

    n=1;
    while(n<=100)
    {
        if (n==1) 
        {
            //printf("\n%d is not a prime number", n);
            //return 0;
        }
        else 
        {
            d=2;
            while(d<=n/2)
            {
                
                if(n%d==0)
                {
                    printf("\n%d is not a prime number", n);
                    break;
                }
                d++;
            }
            if(d>n/2)
            {
                printf("\n%d is a prime number", n);
            }
                
        }
        n++;
    }
    

    return 0;
} 