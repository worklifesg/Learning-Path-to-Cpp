// Program to define class

#include <iostream>

using namespace std;

// everyone has balance, deposit and withrdawal function and new function bankaccoutn function

// public - to be or not to be seen when we create instance of a class
// private - as not allowing anyone to create instance and check what is in private
class BankAccount
{
	private:
		float balance; 
	
	public:
		BankAccount(); // constructor - is only called when we create an instance of object // can't specifically call it.
		void Deposit(float); ///add money
		void WithDrawl(); // substract money
		float getBalance(); //return my balance to print it out
};

//define constructor - parameter list // here we need no parameter (default constructor)

BankAccount::BankAccount()
{
	balance = 0;
}


//define what function is doing like get balance, deposit or maybe withdrawl linked with main()

float BankAccount::getBalance()
{
	return balance;
}

void BankAccount::Deposit(float dep)
{
	balance = balance + dep;
}

int main()
{
	//reference data
	BankAccount checking; //created an instance of object, so everthing inside this class gets copied over the memory with temporary name of checking
	BankAccount savings;
	
	cout << "Checking balance is: " << checking.getBalance() << endl;
	cout << "Savings balance is: " << savings.getBalance() << endl;
	
	checking.Deposit(100);
	savings.Deposit(500);
	
	cout << "Checking balance is: " << checking.getBalance() << endl;
	cout << "Savings balance is: " << savings.getBalance() << endl;
	
}

// checking and savings have their respective three functions available from class BankAccount

/* OUTPUT

Checking balance is: 0
Savings balance is: 0
Checking balance is: 100
Savings balance is: 500

*/
