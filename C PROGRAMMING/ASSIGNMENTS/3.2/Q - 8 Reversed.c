//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
int main()
{
	int n,reverse = 0, remainder;
	
	printf("\n\t Enter any Number = ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	
	printf("\n\t Reversed Number = %d", reverse);
	
}