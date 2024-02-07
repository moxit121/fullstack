#include<iostream>
#include<cstdlib>
using namespace std;

	int add(int d,int g)
	{
		cout<<"\n\t Inside UDF A = , B = "<<d,g;
		return d+g;
	}
	int sub(int d,int g)
	{
		cout<<"\n\t Inside UDF A = , B = "<<d,g;
		return d-g;
	}
	int mul(int d,int g)
	{
		cout<<"\n\t Inside UDF A = , B = "<<d,g;
		return d*g;
	}
	int division(int d, int g)
	{
		cout<<"\n\t Inside UDF A = , B = "<<d,g;
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
	
	cout<<"\n\t\t1.Addition";
	cout<<"\n\t\t2.Subtraction";
	cout<<"\n\t\t3.Multiplication";
	cout<<"\n\t\t4.Division";
	
	cout<<"\n\t\tEnter Your Choice = ";
	cin>>choice;
	cout<<"\n\t --------------------------------------------";
	if(choice==1)
	{
		sum = add(a,b);
		cout<<"\n\t Addition = "<<sum;
		cout<<"\n\t--------------------------------------------";
	}
	if(choice==2)
	{
		sum = sub(a,b);
		cout<<"\n\t Subtraction = "<<sum;
		cout<<"\n\t--------------------------------------------";
	}
	if(choice==3)
	{
		sum = mul(a,b);
		cout<<"\n\t Multiplication = "<<sum;
		cout<<"\n\t--------------------------------------------";
	}
	if(choice==4)
	{
		sum = division(a,b);
		cout<<"\n\t Division = "<<sum;
		cout<<"\n\t--------------------------------------------";
	}
	if(choice==5)
	{
		cout<<"Invalid Choice";
	}
	else{
		
	}
	
}