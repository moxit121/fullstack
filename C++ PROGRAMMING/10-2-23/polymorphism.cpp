#include<iostream>
using namespace std;

class mo
{
	public:
		void add()
		{
			int a,b;	
			cout<<"\n Enter A = ";
			cin>>a;
			cout<<" Enter B = ";
			cin>>b;
			cout<<"\n Addition = "<<(a+b);
		}
		void add(int a, int b)
		{
			cout<<"\n Addition = "<<(a+b);
		}
			int  add(int a, int b, int c)
		{
			return a+b+c;
		}
}; 
int main()
{
	
	mo ctp;
	ctp.add();
	ctp.add(5,7);
	cout<<"\n Addition = "<<ctp.add(5,5,5);
	return 0;
}