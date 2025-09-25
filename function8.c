/*
Write function to calculate net salary of an employee if the empid,empname,and
basic_salaray are given as arguments to the functio(Use your own criteria to find the net)
*/

#include<stdio.h>

int net_salary(int b_salary)
{
    int gross_salary,ta,hra,net;

    printf("\nEnter the Employe Basic salary: ");
    scanf("%d",&b_salary);

    ta=b_salary*0.04;
    printf("\nThe ta is:%d",ta);

    hra=b_salary*0.1;
    printf("\nThe hra is:%d",hra);

    gross_salary=b_salary+hra+ta;
    printf("\nThe gross salary:%d",gross_salary);

    net=gross_salary*12;
    printf("\nThe net salary is: %d",net);
    
}

int main()
{
    char name[10],id[10];
    int b_salary,N;
    printf("\nEnter the Employe name: ");
    scanf("%s",&name);
    printf("\nEnter the Employe id: ");
    scanf("%s",&id);
   
    N=net_salary(b_salary);
    
    
    return 0;
}