#include<iostream>
using namespace std;

class sample
{
	public:
		string name;
		int age;
		sample()
		{
			cout<<"\n Default constructor called.";
		}
		
		sample(string n,int a)
		{
			cout<<"\n Parameterized constructor called.";
			name=n;
			age=a;
		}
		void show ()
		{
			cout<<"\n Name = "<<name;
			cout<<"\n Age = "<<age;
		}
	
};

int main()
{
	sample obj1;
	
	string name;
	int age;
	cout<<"\n Enter your Name = ";
	getline(cin,name);
	cout<<"\n Enter your age = ";
	cin>>age;
	sample obj2(name,age);
	obj2.show();
	return 0;
	 
}