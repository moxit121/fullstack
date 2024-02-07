//WAP to print factorial of given number

#include<stdio.h>
int main()
{
	int n,i;
	double fact = 1;
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Factorial programme \xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\t Enter Any Number : ");
	scanf("%d", &n);
	
	//shows error if user enters a negative integer
	
	if(n<0)
	{
		printf("\n\tError! Factorial Of a negative number is doesn't exist");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact *= i;
		}
		printf("\t Factorial of %d = %.0lf", n, fact );
	}
}