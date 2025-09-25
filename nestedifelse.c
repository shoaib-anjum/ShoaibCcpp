/*

Read marks in 3 sub
1:if marks are invalid result as ivalid and exit
2:if student is fail in any sub result as fail and exit
3:if student is pass in all sub result as pass and calc total and percent and grade
4:if percent>=75 "A" grade ......................... 

Note : Use Nested if else and (if else if .... else)
*/

#include<stdio.h>
int main()
{
    int eng, math, phy, total;
    float percent;
    printf("Enter marks in 3 subjects: ");
    scanf("%d%d%d",&eng,&math,&phy);
    if(eng>100||math>100||phy>100||eng<0||math<0||phy<0)
    {
        printf("Invalid Marks, Please enter marks between 0 and 100");
    }
    else
    {
        if (eng<35||math<35||phy<35)
        {
            printf("\nFAIL");
        }
        else if (eng>=35||math>=35||phy>=35)
        {
            printf("\nPASS");
            total=eng+math+phy;
            percent=total/3.0;
            printf("\nTotal Marks: %d",total);
            printf("\nPercentage: %.2f",percent);

            if(percent>=75)
            {
                printf("\nGrade: A");
            }
            else if(percent>=60)
            {
                printf("\nGrade: B");
            }
            else if(percent>=50)
            {
                printf("\nGrade: C");
            }
            else
            {
                printf("\nGrade: D");
            }
            

        }

        
    }
    return 0;

}