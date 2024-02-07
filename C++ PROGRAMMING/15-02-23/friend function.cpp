#include<iostream>
using namespace std;

class Avinash
{
	private:
		int money;
		friend int Jyot(Avinash);
	public:
		Avinash()
		{
			money = 0;
			cout<<"\n Money is = "<<money;
		}	
};
int Jyot(Avinash obj)
{
	obj.money = 100;
	return obj.money;
	
}
int main()
{
	Avinash avi;
	cout<<"\n Jyot Given To Money Avinash Is "<<Jyot(avi);
	return 0;
}