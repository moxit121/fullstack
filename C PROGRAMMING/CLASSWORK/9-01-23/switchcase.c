#include<stdio.h>

int main()
{
	int a,b,choice;
	
	printf("\n Enter A = ");
	scanf("%d",&a);
	printf(" Enter B = ");
	scanf("%d",&b);
	printf("\n A=%d B=%d",a,b);
	printf("\n 1. ADDITION\n 2. SUBTRACT\n 3. MULTIPLY\n 4. DIVISION");
	
	printf("\nEnter Your Choice = ");
	scanf("%d",&choice);
	printf("\n-----------------------------------");
	
	switch(choice)
	{
		case 1: printf("\n ADDITION = %d",(a+b));
		break;
		case 2: printf("\n SUBTRACT = %d",(a-b));
		break;
		case 3: printf("\n MULTIPLY = %d",(a*b));
		break;
		case 4: printf("\n DIVISION = %.2f",((float)a/b));
		break;
		default: printf("\n Invalid Choice");
	}
	
}