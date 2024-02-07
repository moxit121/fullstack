#include<stdio.h>
//nested if else
int main()
{
	int a,b,c;
	
	printf("\nEnter A , B, C : ");
	scanf("%d%d%d",&a,&b,&c);
/*	printf("\nEnter B =");
	scanf("%d",&b);
	printf("\nEnter C =");
	scanf("%d",&c);
*/	
	printf("\nA= %d \nB= %d \nC= %d",a,b,c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n A is Greater");	
		}
		else
		{
			printf("\n C is Greater");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n B is Greater");
		}
		else
		{
			printf("\n C is Greater");
		}
	}
	
}