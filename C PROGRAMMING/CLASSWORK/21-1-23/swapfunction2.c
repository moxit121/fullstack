#include<stdio.h>

int swap(int n1,int n2)
{
	printf("\n\t Inside UDF A = %d, B = %d",n1,n2);
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	printf("\n\t After swap A = %d, B = %d",n1,n2);
	
}
int main()
{
	int a,b;
	
	printf("\n\t Take input from user nd pass value in UDF:");
	printf("\n\t Enter A = ");
	scanf("%d",&a);
	printf("\t Enter B = ");
	scanf("%d",&b);
	printf("\n\t--------------------------------------------");
	printf("\n\t Start Function");
	swap(a,b);
	printf("\n\t Stop Function");
	printf("\n\t--------------------------------------------");
	
}