//WAP to print Fibonacci series up to given numbers
#include<stdio.h>

int main()
{
	int n1=0,n2=1,next = 0,n;
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Fibonacci_Series programme \xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\t Enter any number = ");
	scanf("%d",&n);
	
	printf("\t Fibonacci series : %d, %d, ",n1, n2);
	next = n1+n2;
	
	while(next<= n)
	{
		printf("%d, ",next);
		n1 = n2;
		n2 = next;
		next = n1+n2;
	}
}