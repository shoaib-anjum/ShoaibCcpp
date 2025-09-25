/*
Read the temp from the user in celcius and convert it into K and F
f=(c*9/5)+32;
k=c+273.15;
*/

#include<stdio.h>
int main()
{
    float c,f,k;
    printf("Enter the temperature in celcius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    k=c+273;
    printf("Temperature in Farenheit: %f",f);
    printf("\nTemperature in Kelvin: %f",k);

    return 0;
}