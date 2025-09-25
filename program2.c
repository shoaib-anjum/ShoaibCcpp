/*
Read the radius of circul and calculate its area and circumference
area = pi*r*r
circumference = 2*pi*r
*/
#include<stdio.h>
int main()
{
    float r,a,c,pi=3.1414;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    a=pi*r*r;
    c=2*pi*r;
    printf("\nArea of circle is : %.2f",a);
    printf("\nCircumference of circle is : %.2f",c);
    return 0;
}