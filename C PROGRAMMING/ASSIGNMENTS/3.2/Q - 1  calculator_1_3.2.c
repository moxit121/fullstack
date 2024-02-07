//WAP to make simple calculator 
//(operation include Addition, Subtraction, Multiplication, Division, modulo)
#include<stdio.h>

int main()
{
	int a,b;
	int add,sub,mul,modulo_remainder;
	float div_quotient;
	
		printf("\n\t\t \xB2\xB2\xB2\xB2\xB2 CALCULATOR \xB2\xB2\xB2\xB2\xB2");
		printf("\n\t\t Enter A = ");
		scanf("%d",&a);	
		printf("\t\t Enter B = ");
		scanf("%d",&b);
		printf("\n\t\t-------------------------------------------");
		printf("\n\t\t A = %d\n\t\t B = %d",a,b);
		printf("\n\t\t-------------------------------------------");
	
		add = a+b;
		sub = a-b;
		mul = a*b;
		div_quotient = (float)a/b;
		modulo_remainder = a%b;
		printf("\n\t\t-------------------------------------------");
		
		printf("\n\t\t ADDITION = %d",add);
		printf("\n\t\t SUBTRACTION = %d",sub);
		printf("\n\t\t MULTIPLICATION = %d",mul);
		printf("\n\t\t DIVISION = %.2f",div_quotient);
		printf("\n\t\t MODULO = %d",modulo_remainder);
		
	
}