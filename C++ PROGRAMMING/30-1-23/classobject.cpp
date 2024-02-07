#include<iostream>
using namespace std;

	class sample
	{
		public:
			int a;
			void getA()
			{
				cout<<"\n Enter value Of A = ";
				cin>>a;
			}
			void putA()
			{
				cout<<" Value of A = "<<a;
			}
	};
	
	int main()
	{
		sample h1;
		h1.getA();
		h1.putA();
		return 0;
	}