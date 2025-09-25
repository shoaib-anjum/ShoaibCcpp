#include<stdio.h>
#include<string.h>
int main()
{
    char fruits[50][20],temp[20],f[20];
    int i=0,j,n;

    while(1)
    {
        fflush(stdin);
        printf("\nEnter the fruits name: ");
        scanf("%s",&f);
        strlwr(f);
        printf("\n %s",f);

        if(strcmp(f,"stop")==0)
        
            break;
        
        else
        {
            strcpy(fruits[i],f);
            i++;
        }
    }
    n=i;
    printf("\nThe actual list is: ");
    return 0;
}