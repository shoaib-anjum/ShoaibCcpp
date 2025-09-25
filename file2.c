//Data sepration and analysis

#include<stdio.h>
int main()
{
    FILE *p1,*p2,*p3,*p4;
    char ch;
    int c=0,a=0,n=0,space=0,s=0,l=0,v=0;
    p1=fopen("Data.txt","r");
    p2=fopen("Alpha.txt","w");
    p3=fopen("Number.txt","w");
    p4=fopen("Symbol.txt","w");

    if(p1==NULL||p2==NULL||p3==NULL||p4==NULL)
    {
        printf("\nError in opening file");
    }
    else
    {
        while(1)
        {
            if(ch==' ')
            {
                space++;
            }
            if(ch=='\n')
            {
                l++;
            }
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                v++;
            }
            ch=fgetc(p1);
            if(ch==EOF)
                break;
            else
            {
                putchar(ch);

                if( ch>=65 & ch<=90 || ch>=97 & ch<=122)
                {
                    fputc(ch,p2);
                    a++;
                }
                else if( ch>=48 & ch<=57)
                {
                    fputc(ch,p3);
                    n++;
                }
                else
                {
                    fputc(ch,p4);
                    s++;
                }
            }

        
            
        }
        fclose(p1);
        fclose(p2);
        fclose(p3);
        fclose(p4);
        
    }
    printf("\nAlphabete=%d",a);
    printf("\nNumber=%d",n);
    printf("\nSymbol=%d",s);
    printf("\nVowels=%d",v);
    printf("\nSpace=%d",space);
    printf("\nLines=%d",l);
    

    
    return 0;
}