// do while - user choice option

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int userChoice = 0;
	
	do
	{
		cout << "Hello! Welcome to my menu \n";
		cout << "Please choose one of the following: \n";
		cout << "1. Continue \n";
		cout << "2. Quit \n" ;
		
		cin >> userChoice;
	} while (userChoice == 1);
}

/*
Hello! Welcome to my menu
Please choose one of the following:
1. Continue
2. Quit
1
Hello! Welcome to my menu
Please choose one of the following:
1. Continue
2. Quit
1
Hello! Welcome to my menu
Please choose one of the following:
1. Continue
2. Quit
2

--------------------------------
*/
