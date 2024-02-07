#include<iostream>
using namespace std;

	class name
	{
		public:
			string Name;
			void getname(string n)
			{
				Name = n;
			}
			void putname()
			{
				cout<<" Your name = "<<Name;
			}
	};
	
	int main()
	{
		name n;
		string name;
			cout<<"\n Enter Your name = ";
			getline(cin,name);	//display A
			n.getname(name);
			n.putname();
		return 0;
	}