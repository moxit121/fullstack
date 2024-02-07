#include<iostream>
using namespace std;

class side{
	protected : 
		double i;
	public:
		void getval(int x)
		{
			i=x;
		}
};

class square : public side
{
	public:
		int sqr()
		{
			return i*i;
		}
};

class cube : public side
{
	public : 
		 int cu()
		 {
		 	return i*i*i;
		 }
		
};





int main()
{
	int a,b;
	cout<<"\nEnter Value for Square : ";
	cin>>a;
	
	square obj;
	obj.getVal(a);
	cout<<"\nSquare is "<<obj.sqr();
	
	cout<<"\nEnter Value for Cube : ";
	cin>>b;
	Cube cb;
	cb.getVal(b);
	cout<<"\nCube is : "<<cb.cu();
	
	return 0;
/*int a;
	square s;
	s.getval(a);
	cout<<"\n Square is  = "<<s.sqr();
	cin>>a;
	cube cb;
	cb.getval(a);
	cout<<"\nCube is = "<<cb.cu();
	cin>>a;
	cout<<"Enter X = ";
	cin>>x;
	s.getval(x);
	cout<<"Square = "<<
	cube c;
	c.getval(x);
*/		
	
}