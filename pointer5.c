#include<stdio.h>
#include<string.h>
struct employee
{
    char name[50];
    char gender[20];
    float salary;
    char skills[3][20];
}e[5];

void displayMaleHighSalary(struct employee e[], int n) 
{
    int i,j,count=0;

    printf("\nMale Employees with Salary > 10 LPA \n");

    for(i=0;i<n;i++) 
    {
        if(strcmp(e[i].gender,"MALE")==0 && e[i].salary>1000000) 
        {
            count++;
            printf("\nName   : %s",e[i].name);
            printf("\nGender : %s",e[i].gender);
            printf("\nSkills : ");
            for(j=0;j<3;j++) 
            {
                printf("%s",e[i].skills[j]);
            }
            printf("\nSalary : %.2f\n",e[i].salary);
        }
    }

    if(count == 0) 
    {
        printf("\nNo male employee found with salary > 10 LPA.\n");
    }
}

void searchByName(struct employee e[], int n) {
    char searchName[50];
    int i, j, found = 0;

    printf("\nEnter the name of the employee to search: ");
    scanf("%s", searchName);

    for (i = 0; i < n; i++) {
        if (strcmp(e[i].name, searchName) == 0) {
            found = 1;
            printf("\nEmployee Found!\n");
            printf("\nName   : %s", e[i].name);
            printf("\nGender : %s", e[i].gender);
            printf("\nSkills : ");
            for (j = 0; j < 3; j++) {
                printf("%s ", e[i].skills[j]);
            }
            printf("\nSalary : %.2f\n", e[i].salary);
            break;
        }
    }

    if (!found) {
        printf("\nEmployee with name '%s' not found.\n", searchName);
    }
}

int main()
{
    int i,j,n;
    printf("\nEnter the number of employees: ");
    scanf("%d",&n);

    printf("\nDetails of %d Employees:\n",n);
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter the Name of employee: ");
        scanf("%s",&e[i].name);

        fflush(stdin);
        printf("\nEnter the Gender of employee(in upper case): ");
        scanf("%s",&e[i].gender);

        for(j=0; j<3; j++) 
        {
            printf("Enter skill %d: ", j+1);
            scanf("%s", e[i].skills[j]);
        }

        printf("\nEnter the Salary of employee: ");
        scanf("%f",&e[i].salary);

        
    }
    displayMaleHighSalary(e, n);
    searchByName(e, n);


    return 0;
}