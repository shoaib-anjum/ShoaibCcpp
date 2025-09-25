#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int o;
    char choice;

    printf("\nEnter the First string: ");
    scanf("%s",&str1);

    printf("\nEnter the Second string: ");
    scanf("%s",&str2);

    while(1)
    {

        printf("\n1: String length");
        printf("\n2: String copy");
        printf("\n3: String concanate");
        printf("\n4: String compare");
        printf("\n5: String uppercase");
        printf("\n6: String lowercase");
        printf("\n7: String reverse");

        printf("\n\nEnter an option: ");
        scanf("%d",&o);

   

        switch(o)
        {
            case 1:
            {
                printf("\nThe length of the First string= %d ",strlen(str1));
                printf("\nThe length of the Second string= %d ",strlen(str2));
            }
            break;

            case 2:
            {
                strcpy(str2,str1);
                printf("\nThe First string is: %s",str1);
                printf("\nThe Second string is: %s",str2);
            }
            break;

            case 3:
            printf("\nThe strings after joining is: %s",strcat(str1,str2));
            break;

            case 4:
            {
                if(strcmp(str1,str2)==0)
                {
                    printf("\nString is equal");
                }
                else if(strcmp(str1,str2)==1)
                {
                    printf("\nString is Larger");
                }
                else
                {
                    printf("\nSecond string is Larger");
                }
            }
        
            break;

            case 5:
            {
                printf("\nThe uppercase of string1 is: %s",strupr(str1));
                printf("\nThe uppercase of string2 is: %s",strupr(str2));
            }
            break;

            case 6:
            {
                printf("\nThe lowercase of string1 is: %s",strlwr(str1));
                printf("\nThe lowercase of string2 is: %s",strlwr(str2));
            }
            break;

            case 7:
            {
                printf("\nThe reverse of string1 is: %s",strrev(str1));
                printf("\nThe reverse of string2 is: %s",strrev(str2));
            }
            break;

            default:
                printf("\nEnter valid option!");
            break;
        }

    printf("\n\nDo you want to continue? (y/n): ");
    scanf(" %c",&choice);

        if (choice == 'n' || choice == 'N')
        {
            printf("\nExiting the program. Goodbye!\n");
            break;
            
        }    

    }
    return 0;
}