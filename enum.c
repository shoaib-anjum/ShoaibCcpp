#include<stdio.h>
int main()
{
    enum days{Mon,Tue,Wed,Thu,Fri,Sat};

    enum days d1=Mon;
    printf("%d",d1);

    enum months{Jan=31,Feb=28,Mar=30};
    enum days m1=Jan;
    printf("\n%d",m1);
    return 0;
}