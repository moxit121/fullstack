//WAP to find area of circle, rectangle and triangle
#include<stdio.h>

//area of circle = πr²

void main()
{
	float area,radius;
	printf("ENTER RADIUS OF CIRCLE = ");
	scanf("%f",&radius);
	area = 3.14159*radius*radius;
	printf("\n---------------------------");
	printf("\nAREA OF CIRCLE IS %.2f",area);
	
}
