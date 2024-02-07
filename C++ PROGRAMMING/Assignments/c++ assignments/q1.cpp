//1.WAP to create simple calculator using class
#include<iostream>
using namespace std;

int main()
{
	int a, b;		//variable declaration
	
	 				//Take 2 numbers from user
	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	
					//display outputs
	cout<<"\n Addition = "<<(a+b);
	cout<<"\n Addition = "<<(a-b);
	cout<<"\n Addition = "<<(a*b);
	cout<<"\n Addition = "<<((float)a/b);
}