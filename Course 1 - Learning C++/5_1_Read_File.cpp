// Program to read .txt file

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream inStream; // intialize reading the files using ifstream
	inStream.open("passphrase.txt"); // open  a file
	
	string passphrase;
	
	if(!inStream.fail())
	{
		inStream >> passphrase;
		
		cout << "The pass phrase is: " << passphrase <<endl;
	}

inStream.close();	
	
}

/* OUTPUT

The pass phrase is: TWENTY

*/
// Missing other data as we need another loop to print all lines in txt file
