#include<stdio.h>
#include "myprg.c"
#define PI 3.1414
#define Area(r) PI*r*r
int main()
{
    greeting();
    FeatureSkills();
    printf("\nThe value of PI is %.2f",PI);
    printf("\nArea is %.2f",Area(5));
    
    return 0;
}
