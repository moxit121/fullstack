//	4	Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class Sample{
	int a,b;
	public:
	
	Sample(int x,int y)
	{	
		
		cout<<"\n Default constructer is called";
		
	}
	void sum()
	{
		cout<<"\Addition : "<<(a+b);
	}
};

int main()
{
	int x,y;
	Sample obj;
	cout<<"Enter 2 Values = "<<endl;
	cin>>x>>y;
	obj.sum(x,y);
	cout<<"\n Addition Is = ";
	return 0;
}