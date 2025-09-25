#include<stdio.h>
int main()
{
    int a[10]={25,44,85,66,55,45,85,50,52,69},i;
    /*
    printf("\n %d",a[0]);
    printf("\n %d",a[1]);
    printf("\n %d",a[9]);
    */

   for(i=0;i<10;i++)
   {
    printf("\n a[%d]=%d",i,a[i]);
   }
   printf("\n Enter 10 numbers");
   for(i=0;i<10;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("\n After storing the values by the user: ");
   for(i=0;i<10;i++)
   {
    printf("\n a[%d]=%d",i,a[i]);
   }

    return 0;
}