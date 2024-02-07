/*2.	Define a class to represent a bank account. Include the following members:
1.Data Member:
	-Name of the depositor
	-Account Number
	-Type of Account
	-Balance amount in the account
2.Member Functions
	-To assign values
	-To deposited an amount
	-To withdraw an amount after checking balance
	-To display name and balance
*/
     
#include<iostream>
using namespace std;

using namespace std;
class Bank
{
	
	//Declaration of data members
	public:
	char name[20];
	char account_type[20];
	int account_number;
	int balance;
	
	//member functions of the class Bank
	// initialize function to initialize data members
	
	void initialize()
	{
		cout<<"\n-----Enter Your Details-------";
		cout<<"\n Enter Account Holders Name : ";
		gets(name);
		cout<<" Enter Account type : ";
		gets(account_type);
		cout<<" Enter account number : ";
		cin>>account_number;
		cout<<" Enter balance to deposit : ";
		cin>>balance;
		cout<<"\n------------------------------------";
	}
	
	//deposit() function to deposit amount in account
	
	void deposit()
	{
		int bal;
		cout<<"\n Enter the amout to deposit : ";
		cin>>bal;
		balance += bal;
		cout<<" Amount deposited successfuly. \n Your New Balance : "<<balance;
		cout<<"\n------------------------------------";
	}
	
	//check() function to withdraw amount and check remaining balance
	
	void check()
	{
		int bal;
		cout<<"\n Your balance : "<<balance<<"\n Enter amount to withdraw : ";
		cin>>bal;
		if(bal<=balance)
			{
					balance -= bal;
					cout<<"\n Remaining Balance : "<<balance;
			}
		else
			{
				exit(0);
			}
		cout<<"\n------------------------------------";
	}
	
	//display function to display user information
	void display()
		{
		cout<<"\nName :";
		puts(name);
		cout<<"Account Type : ";
		puts(account_type);
		cout<<"Account Balance :"<<balance;
		cout<<"\n------------------------------------";
	}
};

int main()
{
	int choice;

//An array of objects of Bank class can be created to handle 10 customers and their data
//as Bank bk[10];
//Then run this array in loop to initialize and access it's data members

	Bank bk;
	bk.initialize();
	fflush(stdin);
	cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw \n------------------------------------ \nEnter your choice\n";
	cin>>choice;
	cout<<"------------------------------------";
	if(choice == 1)
		{
			bk.display();
		}
	else if(choice == 2)
		{
			bk.deposit();
		}
	else if(choice == 3)
		{
			bk.check();
		}
	
}