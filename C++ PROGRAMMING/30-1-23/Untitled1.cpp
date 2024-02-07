#include<iostream>
using namespace std;

	class sample
	{
		public:
			int a;
			void getA(int x)
			{
				a = x;
			}
			void putA()
			{
				cout<<" Value of A = "<<a;
			}
	};
	
	int main()
	{
		sample h1;
		int a;
			cout<<"\n Enter value Of A = ";
			cin>>a;	//display A
			
			h1.getA(a);
			h1.putA();
		return 0;
	}