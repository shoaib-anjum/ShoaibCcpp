#include<stdio.h>
int main()
{
	int age;
	float weight;
	char gender;
	
	
	age=25;
	weight=56.6;
	gender='M';
	/*
	printf("Age=%d",age);
	printf("\nWeight=%f",weight);
	printf("\nGender=%c",gender);
	*/
	
	printf("Enter Age = ");
	scanf("%d",&age);
	printf("Enter Weight = ");
	scanf("%f",&weight);
	printf("Enter Gender = ");
	fflush(stdin);
	scanf("%c",&gender);
	return 0;
}