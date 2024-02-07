#include<iostream>
using namespace std;

class Distance
{
	public:
		int feet,inch;
	Distance(int f, int i)
	{
		feet = f;
		inch = i;	
	}
	
	Distance operator -()
	{
		feet = -feet;
		inch = -inch;
		return Distance(feet,inch);
	}
	
	void Display()
	{
		cout<<"\n Feet = "<<feet;
		cout<<" Inch = "<<inch;
	}
	
	
	
};


int main()
{
	Distance d1(5,-7);
	cout<<"\n Before operator overloading";
	d1.Display();
	-d1;
	cout<<"\n After operator overloading";
	d1.Display();
	
	return 0;
	
}