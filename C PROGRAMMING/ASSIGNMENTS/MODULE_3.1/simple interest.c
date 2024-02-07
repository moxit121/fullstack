#include<stdio.h>

/*  simple interest. = i = prn/100
	p = principle Amount 
	r = rate of interest
	n = months
				 month - 12*100  
				 day   - 365*100 
*/

void main()
{
	int n;
	float p,r,i;
	printf("------------------------------------");
	printf("\n\tEnter Principal Amount = ");
	scanf("%f",&p);
	printf("\tEnter Rate of Interest(%%) = ");
	scanf("%f",&r);
	printf("\tEnter Months of Interest  = ");
	scanf("%d",&n);
	i = (p*r*n)/1200;
	printf("------------------------------------");
	printf("\n\tSimple Interest = %.0f/-",i);
	
}