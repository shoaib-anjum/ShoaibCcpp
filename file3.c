#include<stdio.h>
int main()
{
    FILE *p1,*p2;
    char ch;
    p1=fopen("Data.txt","r");
    p2=fopen("Example3.txt","w");
    

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
                if(ch>=65 && ch<=90)
                    ch-=2;
                else if(ch>=97 && ch<=122)
                {
                    ch+=2;

                    if(ch=='a')
                    {
                        ch='@';
                    }
                    else if(ch=='e')
                    {
                        ch='#';
                    }
                    else if(ch=='i')
                    {
                        ch='$';
                    }
                    else if(ch=='o')
                    {
                        ch='%';
                    }
                    else if(ch=='u')
                    {
                        ch='&';
                    }
                    else
                        ch-=2;
                }
                fputc(ch,p2);
            }
        }
        fclose(p1);
        fclose(p2);
    }
   

    return 0;
}