#include<iostream>
using namespace std;


	class A
	{
		public : 
		int a;
		void getA(int x)
		{
			a = x;
		}
			void showA()
		{
			cout<<"\n A = "<<a;
		}
	};
	class B : public A
	{
		public : 
		int b;
		void getB(int y)
			{
			 b = y;
			}
		void showB()
	{
		cout<<"\n B = "<<b;
	}
	};
	
	class C : public B
	{
		public : 
			int c;
		void getc(int z)
			{
			 c = z;
			}
		void showC()
			{
				cout<<"\n C = "<<c;
			}
	};
	

	

int main()
{
	C o;
	int a;
	int b;
	int c;
	cout<<"\n A = ";
	cin>>a;
	cout<<"\n B = ";
	cin>>b;
	cout<<"\n C = ";
	cin>>c;
	o.getA(a);
	o.getB(b);
	o.showA();
	o.showB();
	o.getc(c);
	o.showC();
	
	return 0;	
}