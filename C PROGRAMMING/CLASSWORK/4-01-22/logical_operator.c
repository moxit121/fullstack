#include<stdio.h>

int main()
{
	int a=10,b=20;
	
	printf("\n A = %d , B = %d",a,b);
	
	if (a&&b) //AND operator 
	{
		printf("\n LINE 1 IS TRUE");
	}
	else 
	{
		printf("\n LINE 2 IS FALSE");
	}
	b=10,a=10;
	if(a||b)
	{
		printf("\n LINE 3 IS TRUE");
	}
	else
	{
		printf("\n LINE 4 IS False");
	}
	a=1,b=1;
	if(!(a&&b))
	{
		printf("\n LINE 5 IS TRUE");
	}
	else
	{
		printf("\n LINE 6 IS False");
	}
	
}