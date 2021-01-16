// This program is written to understand function parameters

#include<iostream>
#include<cstdlib>

using namespace std;

void printreceipt(string, float&); //Anything passed above main() is in global scope, '&' tell us it is passed by reference

int main()
{
	float grandTotal = 0; // grand total initialize to 0 - created a memory space
	string companyName = "123 C0"; // temporary storage in memory
	printreceipt(companyName, grandTotal); // call printreceipt function and pass to it 'companyName' / 'grandtotal or whatever stored in this memeory location.
	
	// calling companyName wil get copied to new temporary variable in the function down below and when is finished it gets value = '123 C0'
	
	// But for 'float& total' the initial value = 0 is NOT stored instead it gets a pointer to the float grandTotal
	// So here we are not passing any value or what is held in the memory BUT actually passing address to this address
	// So now main() and printreceipt() are sharing the address that has total and grandTotal
	// If we change the value of total in the function, it will change grandTotal in main() as well.
	
	cout << grandTotal << endl;
}

void printreceipt(string companyName, float& total)
{
	cout << "Thank you for using " << companyName;
	cout << "\nYour total is: ";
	total = total +1;
}
