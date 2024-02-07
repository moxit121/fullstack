#include<stdio.h>

// arithmetic operators

void main()
{
	int a;
	int b;
	
	printf("\n\t----------------------------------");
	printf("\n\tEnter the first number = ");
	scanf("%d",&a);
	printf("\n\tEnter the second number = ");
	scanf("%d",&b);	
	printf("\n\t----------------------------------");
	printf("\n\tADD = %d",a+b);
	printf("\n\tSUB = %d",a-b);
	printf("\n\tMUL = %d",a*b);
	printf("\n\tDIV = %.2f",((float)a/b));
	printf("\n\tMODULO = %d",a%b);
	
}