/*
Read distance in km and convert into meters, cm, mm, miles and inches
meter=km*100 , cm=km*100000, mm=km*1000000, miles=km*0.621371, inches=km*39370.1
*/
#include<stdio.h>
int main()
{
    float km,m,cm,mm,miles,inches;
    printf("Enter distance in Km: ");
    scanf("%f",&km);
    m=km*100;
    cm=km*100000;
    mm=km*1000000;
    miles=km*0.621371;
    inches=km*39370.1;
    printf("Distance in meters is: %.2f ",m);
    printf("\nDistance in cm is: %.2f",cm);
    printf("\nDistance in mm is: %.2f",mm);
    printf("\nDistance in miles is: %.2f",miles);
    printf("\nDistance in inches is: %.2f",inches);

    return 0;
}