#include<iostream>
using namespace std;
class sample 
{
	public: 
	sample()
	{
		cout<<"\n Default constructor called";
	}
	void show()
	{
		cout<<"\n This is show method";
	}		
};
int main()
{
	sample obj1;
	obj1.show();
	return 0;
}
