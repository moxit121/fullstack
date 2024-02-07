#include<iostream>
using namespace std;

template <typename T>
T common(T a, T b)
{
	return a+b;
}


int main()
{
	cout<<"\n Add Using Integer = "<<common<int>(54, 7);
	cout<<"\n Add Using String = "<<common<string>("Moxit", "Shah");
	cout<<"\n Add Using Float = "<<common<float>(3.14f, 99.99f);
	
	return 0;
}
//great lrarning