/* File encryption & decrypt */
#include<stdio.h>
int main()
{
    FILE *p1,*p2,*p3;
    char ch,key='r';
    p1=fopen("actual.txt","r");
    p2=fopen("encrypt.txt","w");
    

    if(p1==NULL || p2==NULL)
    {
        printf("\nError in opening file");
    }
    else
    {
        while(1)
        {
            ch=fgetc(p1);
            if(ch==EOF)
                break;
            else
            {
                ch=ch^key;
            }
            fputc(ch,p2);
        }
        fclose(p1);
        fclose(p2);
    }
    printf("\nDecryption proxcess");

    p2=fopen("encrypt.txt","r");
    p3=fopen("decrypt.txt","w");
    

    if(p2==NULL || p3==NULL)
    {
        printf("\nError in opening file");
    }
    else
    {
        while(1)
        {
            ch=fgetc(p2);
            if(ch==EOF)
                break;
            else
            {
                ch=ch^key;
            }
            fputc(ch,p3);
        }
        fclose(p2);
        fclose(p3);
    }


    return 0;
}