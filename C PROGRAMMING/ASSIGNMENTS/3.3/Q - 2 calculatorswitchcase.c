//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>


	//user defined functions
	int add(int d,int g)
	{
		printf("\n\t A = %d, B = %d",d,g);
		return d+g;		//return values in main
	}
	int sub(int d, int g)
	{
		printf("\n\t A = %d, B = %d",d,g);
		return d-g;		//return values in main
	}
	int mul(int d, int g)
	{
		printf("\n\t A = %d, B = %d",d,g);
		return d*g;		//return values in main
	}
	
	int div(int d, int g)
	{
		printf("\n\t A = %d, B = %d",d,g);
		return d/g;		//return values in main
	}
	
	

int main()
{
	int a,b,sum,choice;
	
	printf("\n\t==========================================================");
	printf("\n\t Enter A = ");
	scanf("%d",&a);
	printf("\t Enter B = ");
	scanf("%d",&b);
	
	printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2 CALCULATOR \xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\t 1.ADDITION\n\t 2.SUBTRACTION\n\t 3.MULTIPLY\n\t 4.DIVISION");
	printf("\n\t --------------------------------------------");
	printf("\n\t Enter Your Choice : ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: 
		sum = add(a,b);
		printf("\n\t1.ADDITION = %d",sum);
		printf("\n\t--------------------------------------------");
		break;
		
		case 2: 
		sum = sub(a,b);
		printf("\n\t2.SUBTRACTION = %d",sum);
		printf("\n\t--------------------------------------------");
		break;
		
		case 3: 
		sum = mul(a,b);
		printf("\n\t3.MULTIPLICATION = %d",sum);
		printf("\n\t--------------------------------------------");
		break;	
		
		case 4: 
		sum = div(a,b);
		printf("\n\t 4.DIVISION = %d",sum);
		printf("\n\t--------------------------------------------");
		break;	
		
	}

	
}
