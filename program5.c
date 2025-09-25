/*
Read sides of hexagon and calculate its area
area = [3 * sqrt(3)/2]*side*side
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float side,area;
    printf("Enter the side of the hexagon: ");
    scanf("%f",&side);
    area = (3 * sqrt(3)/2)*side*side;   
    printf("The area of the hexagon is: %.2f",area);
    return 0;
}