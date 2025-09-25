#include<stdio.h>

void greetings(char*first,char*last)
{
    printf("\nWelcome to C %s %s",first,last);
}

int main()
{

    greetings("Mohammed","Mohsin");
    greetings("Mohammed","Asjad");
    greetings("Mohammed","zbds");
    greetings("Mohammed","cdga");

    return 0;
}