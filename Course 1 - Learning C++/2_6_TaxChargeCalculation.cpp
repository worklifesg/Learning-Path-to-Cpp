// Calculate Charge Tax Program

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const float TAX_RATE = 0.04;

int main()
{
	//declare variables
	string name;
	float price = 4.50;
	int qty = 0;
	float charge = 0, taxCharge = 0;
	
	//input from user
	cout << "Enter the number you wish to enter: \n";
	cin >> qty;
	
	//format output
	cout.setf(ios::fixed); // 'fixed' allow our data to not be shown in e-notation
	cout.setf(ios::showpoint); // 'showpoint' will make show decimal point if not needed
	
	//calculations
	charge = price * qty;
	taxCharge = charge * TAX_RATE;
	
	cout << "The tax charged is : $ " << setprecision(2) << taxCharge <<endl;
	
	charge = charge + taxCharge;
	
	//formatted output
	cout << "Your total charge: $ " << setprecision(2) << charge << endl;
	
	return 0;
}
