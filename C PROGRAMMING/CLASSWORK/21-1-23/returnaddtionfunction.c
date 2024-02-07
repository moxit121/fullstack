#include<stdio.h>

int add(int d,int g)
{
	cout<<"\n\t Inside UDF A = %d, B = %d"<<d,g;
	return d+g;
}
int sub(int d,int g)
{
	cout<<"\n\t Inside UDF A = %d, B = %d"<<d,g;
	return d-g;
}
int mul(int d,int g)
{
	cout<<"\n\t Inside UDF A = %d, B = %d"<<d,g;
	return d*g;
}
int div(int d,int g)
{
	cout<<"\n\t Inside UDF A = %d, B = %d"<<d,g;
	return d/g;
}
int main()
{
	int a,b,choice,sum;
	
	cout<<"\n\t Take input from user nd pass value in UDF:";
	cout<<"\n\t Enter A = ";
	cin>>a;
	cout<<"\t Enter B = ";
	cin>>b;
	
	cout<<"\n\t --------------------------------------------";
	if(choice==1)
	{
		sum = add(a,b);
		printf("\n\t Addition = %d",sum);
		printf("\n\t--------------------------------------------");
	}
	if(choice==2)
	{
		sum = sub(a,b);
		printf("\n\t Subtraction = %d",sum);
		printf("\n\t--------------------------------------------");
	}
	if(choice==3)
	{
		sum = mul(a,b);
		printf("\n\t Multiplication = %d",sum);
		printf("\n\t--------------------------------------------");
	}
	if(choice==4)
	{
		sum = div(a,b);
		printf("\n\t Division = %d",sum);
		printf("\n\t--------------------------------------------");
	}	
	
	
}