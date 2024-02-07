//	3	Write a program to find the multiplication values and the cubic values usinginline function
#include<iostream>
using namespace std;

class line
{
	public: 
	inline float mul(float x, float y)//initialize inline function
		{
			return (x*y);
		}
	inline	float cube(float x)
		{
			return (x*x*x);
		}
};

int main()
{
	int x,y;
	int a;
	line obj;
	cout<<"\n Enter X = ";
	cin>>x;
	cout<<" Enter Y = ";
	cin>>y;
	cout<<"\n Multiplication is = "<<obj.mul(x,y);
	cout<<"\n-----------------------------";
	cout<<"\n Enter A  = ";
	cin>>a;
	cout<<" Cube of A is = "<<obj.cube(a);
}