#include<stdio.h>

void main()
{
	int b,h;
	float area;
	
	printf("-------------------------------");
	printf("\nEnter base of triangle = ");
	scanf("%d,",&b);

	printf("Enter height of triangle = ");
	scanf("%d,",&h);
	
	area = (b*h)/2;	
	printf("-------------------------------");
	printf("\nArea of triangle = %.0f",area);
	
}