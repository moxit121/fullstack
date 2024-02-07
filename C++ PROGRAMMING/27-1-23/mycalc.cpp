#include<iostream>
using namespace std;

int sum()
{
	
}

int main()
{
	int a,b,choice;
	cout<<"\n\n\t\t\xB2\xB2\xB2\xB2\xB2 Choice Calculator  \xB2\xB2\xB2\xB2\xB2";
	cout<<"\n\n\t\tEnter A : ";
	cin>>a;
	cout<<"\t\tEnter B : ";
	cin>>b;
		cout<<"\n\t\tEnter value of A :"<<a;
	    cout<<"\n\t\tEnter value of B :"<<b;
	cout<<"\n\t\t=================================";
	cout<<"\n\t\tPress 1. for Addition";    
    cout<<"\n\t\tPress 2. for Subtraction";
	cout<<"\n\t\tPress 3. for Multiplication";
	cout<<"\n\t\tPress 4. for Division";
	cout<<"\n\t\t=================================\n";
    cout<<"\n\t\tEnter your choice = ";	
	cin>>choice;
	
	if(choice==1)
	{
		cout<<"\n\t\t Addition :"<<(a+b);
	}
	else if(choice==2)
	{
		cout<<"\n\t\t subtraction :"<<(a-b);
	}
	else if(choice==3)
	{
		cout<<"\n\t\t multiplication :"<<(a*b);
	}
	else if(choice==4)
	{
		cout<<"\n\t\t division :"<<((float)a/b);
	}
	else
	{
	    cout<<"\n\t\tInvalid Choice";
	}
	return 0;
}
	
