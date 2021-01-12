// Challenge 1 - Ask person his/her favorite food and have some conversation as well.

#include <iostream>
using namespace std;

int main()
{
	string name;
	string favfood;
	
	cout << "Please enter you name: " ;
	cin >> name;
	cout << "Hello, " << name <<", nice to see you, what is your favorite food? \n";
	cin >> favfood;
	cout << " My favorite food is also, " << favfood << ", Great !!";
}
