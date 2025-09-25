/*
Read sides of rectangle and calculate its area and parameter
area=lenght*width
parameter=2*(lenght+width)
*/
#include<stdio.h>
int main()
{
    int l,w,a,p;
    printf("Enter the length of rectangle: ");
    scanf("%d",&l);
    printf("Enter the width of rectangle: ");
    scanf("%d",&w);
    a=l*w;
    p=2*(l+w);
    printf("Area of rectangle: %d",a);
    printf("\nParameter of rectangle: %d",p);

    return 0;
}