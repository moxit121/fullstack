#include<stdio.h>

//area of rectangle = length*width.

void main ()
{
	float length,width,area;
	printf("----AREA OF RECTANGLE----");
	printf("\nEnter length rectangle = ");
	scanf("%f",&length);
	printf("\nENTER WIDTH OF RECTANGLE = ");
	scanf("%f",&width);
	area = length*width;
	printf("\n--------------------------------");
	printf("\nAREA OF RECTANGLE IS %.0f",area);

}