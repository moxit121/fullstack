//RunTime Polymorphism(Dynamic polymorphism) - Method overriding

#include<iostream>
using namespace std;

class A{
	public:
		void show()
		{
			cout<<"\n Show From A : ";
		}
};
class B : public A{
	public:
		void show()
		{	
			A::show();
			cout<<"\n Show From B : ";
		}
};
class C : public B{
	public:
		void show()
		{
			B::show();//method override
			cout<<"\n Show From C : ";
		}
};


int main()
{
	
	cout<<"\n ------Method ovverriding------";
	C obj;
	obj.show();
	
	return 0;
}