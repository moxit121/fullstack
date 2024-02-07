#include<stdio.h>

void main()
{
	int a;
	int b;
	
	printf("-------------------------------");
	printf("\nENter First Number  = ");
	scanf("%d",&a);
	printf("ENter second Number  = ");
	scanf("%d",&b);
	
	printf("\nADD = %d",a+b);
	printf("\nSUB = %d",a-b);
	printf("\nMUL = %d",a*b);
	printf("\nDIV = %.0f",((float)a/b));
	
}