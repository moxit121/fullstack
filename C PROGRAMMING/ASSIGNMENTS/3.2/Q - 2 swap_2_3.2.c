//WAP to swap two numbers without using third variable

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter A = ", a);
	scanf("%d",&a);
	printf("Enter B = ", b);
	scanf("%d",&b);
	
	printf("\n\t Before Swap \n\tA = %d, B = %d", a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\t After swap \n\tA = %d, B = %d", a,b);
	
	
	
}