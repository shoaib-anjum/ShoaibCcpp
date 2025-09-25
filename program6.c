/*
Read the base and height of triangle and calculate its area
area of triangle=(1/2)*base*height
*/
#include <stdio.h>
  
int main()
{
    float base, height, area;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base); 
    printf("Enter the height of the triangle: ");
    scanf("%f", &height); 

    area = 0.5 * base * height;  
    printf("\nArea of the triangle: %.2f\n", area);

    return 0;
}
