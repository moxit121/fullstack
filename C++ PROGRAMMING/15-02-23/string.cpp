#include<iostream>
using namespace std;

int main()
{
	string name;
	string fname;
	string lname;
	
	
	cout<<"\n Enter Your Name : ";
	getline(cin,name);
	
	cout<<"\n Enter First Name : ";
	cin>>fname;
	cout<<"\n Enter last Name : ";
	cin>>lname;
	
	cout<<"\n Name is "<<(fname+" "+lname);//concatenet
	fname = lname;
	
	int len = fname.size();
	cout<<"\n string size is : "<<len;
	
	
}