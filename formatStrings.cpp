#include<stdio.h>
int main()
{
	int age; 
	float weight;
	char gender;
	
	printf("Enetr your age = ");
	scanf("%d",&age);
	
	printf("Enetr your weight = ");
	scanf("%f",&weight);
	
	printf("Enter your gender = ");
	fflush(stdin);
	scanf("%c",&gender);
	
	printf("Age=%d",age);
	printf("\nAge=%i",age);
	printf("\nAge=%u",age);
	printf("\nAge=%ld",age);
	printf("\nAge=%x",age);
	printf("\nAge=%X",age);
	printf("\nAge=%o",age);
	printf("\nAge=%c",age);
	
	
	printf("\nWeight=%f",weight);
	printf("\nWeight=%e",weight);
	
	printf("\nGender=%c",gender);	
	printf("\nGender=%e",gender);
	
	return 0;
	
}