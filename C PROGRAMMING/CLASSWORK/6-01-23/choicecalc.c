#include<stdio.h>

int main()
{
	int a,b,choice;
	printf("\n\t\t \xB2\xB2\xB2\xB2\xB2 choice calculator \xB2\xB2\xB2\xB2\xB2");
	
	printf("\n\t\t Enter A: ");
	scanf("%d",&a);
	printf("\t\t Enter B: ");
	scanf("%d",&b);
	
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t A = %d\n\t\t B = %d",a,b);
	printf("\n\t\t-----------------------------------------------");
	
	printf("\n\t\t 1.ADDITION");
	printf("\n\t\t 2.SUBSTRACTION");
	printf("\n\t\t 3.MULTIPLICATION");
	printf("\n\t\t 4.DIVISION");
	printf("\n\t\t-----------------------------------------------");
	
	printf("\n\t\t Enter Your Choice = ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\n\t\t ADDITION = %d", a+b);
	}
	else if(choice==2)
	{
		printf("\n\t\t SUBSTRACTION = %d", a-b);
	}
	else if(choice==3)
	{
		printf("\n\t\t MULTIPLICATION = %d", a*b);
	}
	else if(choice==4)
	{
		printf("\n\t\t DIVISION = %.2f",((float)a/b));
	}
	else 
	{
		printf("\n\t\t Invalid choice");
	}	
}