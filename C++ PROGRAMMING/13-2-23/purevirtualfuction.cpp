//ABSTRACTION
// Pure Virtual Function

#include<iostream>
using namespace std;

class fanDemo
{
	public:
		virtual void onButton();	//declaring virtual function
		
		void light()
			{
				cout<<"\n Light is on";
			}	
};

class Start : public fanDemo
{
	public:
		
		void AC()
		{
			cout<<"\n Ac Started";
		}
		
		 void onButton()
		{
			cout<<"\n Fan Roatating";
		}
		
};

int main()
{
	Start obj;
	obj.AC();
	obj.light();
	obj.onButton();
	
}