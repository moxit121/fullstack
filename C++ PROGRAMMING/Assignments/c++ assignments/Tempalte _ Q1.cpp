//Write a program of to swap the two values using templates
#include<iostream>
using namespace std;

template <class T>
int swap_numbers(T& a, T& b)
{
	T t;
	t = a;
	a = b;
	b = t;
	return 0;
}

//driver code
int main()
{
	int x,y;
	cout<<"\n Enter X = ";
	cin>>x;
	cout<<" Enter Y = ";
	cin>>y;
		cout<<"\n X = "<<x;
		cout<<" Y = "<<y;
	
	cout<<"\n -------- After Swap ---------";	
	swap_numbers(x, y);
	cout<<"\n X = "<< x << " " <<"\n Y = "<< y << endl;
	return 0;
		
}