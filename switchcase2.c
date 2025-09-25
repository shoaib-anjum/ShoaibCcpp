//Switch case break
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    char o;
    int d,l,b;
    float a,p,di;
    printf("\na= for area of circle");
    printf("\nb= for area of square");
    printf("\nc= for perimeter of rectangle");
    printf("\nd= for diagonal of right triangle");
    printf("\ne= to exit from program");
    printf("\nEnter your choice: ");
    scanf("%c",&o);
    switch(o)
    {
        case 'a':
        printf("Enter diameter of circle:  ");
        scanf("%d",&d);
        a=(d/2)*(d/2)*3.1414;
        printf("\nArea of cirle is: %.2f",a);
        break;

        case 'b':
        printf("Enter side of square: ");
        scanf("%d",&d);
        a=d*d;
        printf("\nArea of square is: %.2f",a);
        break;

        case 'c':
        printf("Enter length of rectangle: ");
        scanf("%d",&l);
        printf("Enter breadth of rectangle: ");
        scanf("%d",&b);
        p=2*(l+b);
        printf("\nPerimeter of rectangle is: %.2f",p);
        break;

        case 'd':
        printf("Enter length of right triangle: ");
        scanf("%d",&l);
        printf("Enter breadth of right triangle: ");
        scanf("%d",&b);
        di=sqrt(l*l+b*b);
        printf("\nDiagonal of right triangle is: %.2f",di);
        break;

        case 'e':
        printf("Press enter to exit ");
        getch();
        break;

        default:
        printf("Invalid choice ");
        break;
    }
    
    return 0;
}