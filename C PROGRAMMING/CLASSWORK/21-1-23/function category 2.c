#include<stdio.h>

int add(int x,int y)
{
	printf("\n\t Inside UDF X = %d, Y = %d",x,y);
	printf("\n\t Addition = %d",(x+y));	
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
	
	add(a,b);
	
	printf("\n\t Stop Function");
	printf("\n\t--------------------------------------------");
	
}