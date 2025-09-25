/*
Write a function which reaqds employee first_name, and last_name as 
arguments and display the full_name 9in uppercase.
*/
#include<stdio.h>
#include<string.h>

int full_name(char *fname,char *lname)
{
    printf("\nEmployee full name in uppercase is: %s",strupr(strcat(fname,lname)));
}


int main()
{
    char fname[10],lname[10];
    int full;
    printf("\nEnter employee first name: ");
    scanf("%s",&fname);
    printf("\nEnter employee last name: ");
    scanf("%s",&lname);
    full=full_name(fname,lname);
    return 0;
}