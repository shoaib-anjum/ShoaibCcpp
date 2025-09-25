//Conditional opt
#include<stdio.h>
int main()
{
    int eng,math,sci;

    printf("Enter the Marks of English:");
    scanf("%d",&eng);
    printf("Enter the Marks of Maths:");
    scanf("%d",&math);
    printf("Enter the Marks of Science:");
    scanf("%d",&sci);
    
    (eng>=35||math>=35||sci>=35) ?printf("\nPASS"):printf("\nFAIL");





    return 0;
}