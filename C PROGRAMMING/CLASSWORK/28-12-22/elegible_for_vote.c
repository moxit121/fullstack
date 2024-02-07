#include<stdio.h>

// Eligible for Voting or not.

void main()
{
	int age;
	printf("\n\t Enter Your Age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n\t You Are Eligible for Voting.");
	}
	else
	{
		printf("\n\t You Are Not Eligible for Voting.");	
	}
}