//WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main()
{
	int num;
	
	printf("\n\t Enter num = ",num);
	scanf("%d",&num);
	
	printf("\t Num = %d",num);
	
	(num%2 == 0)?printf("\n\t Entered Number is Even"):printf("\n\t Entered Number is odd") ;
	
}