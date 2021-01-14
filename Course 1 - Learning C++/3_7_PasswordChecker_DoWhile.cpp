// Do while loop simple example - password checker

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

string correctpass = "1234";
string userpass;

int main()
{
	do
	{
		cout << "Enter Your password: " << endl;
		cin >> userpass;
	} while (userpass != correctpass);
}

/*
Enter Your password:
456
Enter Your password:
789
Enter Your password:
1234

--------------------------------
*/
