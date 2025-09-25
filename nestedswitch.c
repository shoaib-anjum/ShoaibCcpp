#include<stdio.h>
#include<math.h>
int main()

{
    int o,side,radius,l,b,h,num;
    float area,square,cube,su,cu;
    char s,n,c,ch;
    printf("\n1: Shape");
    printf("\n2: Numbers");
    printf("\n3: Characters");
    printf("\n4: Distance");
    printf("\n5: exit");
    printf("\n\nEnter your option: ");
    scanf("%d",&o);

    switch(o)
    {
        case 1:
        printf("\na: Area of circle");
        printf("\nb: Area of rectangle");
        printf("\nc: Area of triangle");
        printf("\nd: Area of square");
        printf("\n\nEnter your option: ");
        fflush(stdin);
        scanf("%c",&s);

        switch(s)
        {
            case 'a':
            printf("\nEnter the radius of the circle: ");
            scanf("%d",&radius);
            area=3.1414*radius*radius;
            printf("\nThe area of the circle is: %.2f",area);
            break;

            case 'b':
            printf("\nEnter the length and breadth of the rectangle: ");
            scanf("%d %d",&l,&b);
            area=l*b;
            printf("\nThe area of the rectangle is: %.2f",area);
            break;

            case 'c':
            printf("\nEnter the length of the base and height of the triangle: ");
            scanf("%d %d",&l,&h);
            area=0.5*l*h;
            printf("\nThe area of the triangle is: %.2f",area);
            break;

            case 'd':
            printf("\nEnter the side of the square: ");
            scanf("%d",&side);
            area=side*side;
            printf("\nThe area of square is: %.2f",area);
            break;
        }
        break;

        case 2:
        printf("\na: Find square");
        printf("\nb: Find cube");
        printf("\nc: Find square root");
        printf("\nd: Find cube root");
        printf("\n\nEnter your option: ");
        fflush(stdin);
        scanf("%c",&n);

        switch(n)
        {
            case 'a':
            printf("\nEnter the number: ");
            scanf("%d",&num);
            square=num*num;
            printf("\nThe square of the number is: %.2f",square);
            break;

            case 'b':
            printf("\nEnter the number: ");
            scanf("%d",&num);
            cube=num*num*num;
            printf("\nThe cube of the number is: %.2f",cube);
            break;

            case 'c':
            printf("\nEnter the number: ");
            scanf("%d",&num);
            su=sqrt(num);
            printf("\nThe square root of the number is: %.2f",su);
            break;

            case 'd':
            printf("\nEnter the number: ");
            scanf("%d",&num);
            cu=cbrt(num);
            printf("\nThe cube root of the number is: %.2f",cu);
            break;

        }
        break;

        case 3:
        printf("\na: Chr to ASCII");
        printf("\nb: ASCII to Chr");
        printf("\nc: String join");
        printf("\n\nEnter your option: ");
        fflush(stdin);
        scanf("%c",&c);

        switch(c)
        {
            case 'a':
            printf("\nEnter the character: ");
            scanf("%c",&ch);

            printf("\nThe ASCII value of the character is: %d",ch);
            break;
        }

        break;

        case 4:
        break;

        case 5:
        break;

    }

    return 0;
}
