#include<stdio.h>

void f1()
{
	f2();
	printf("\n 1.");
}

void f2()
{
	
	printf("\n 2.");
	
}
void main()
{
	printf("\nBefore");
	f1();
	f2();
	printf("\n after");
}