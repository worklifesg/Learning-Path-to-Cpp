// Program to read .txt file (print all lines)

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
		while(inStream >> passphrase)
		{
			cout << "The pass phrase is: " << passphrase <<endl;
		}
	}

inStream.close();	
	
}

/* OUTPUT

The pass phrase is: TWENTY
The pass phrase is: TEN
The pass phrase is: FIVE
The pass phrase is: THREE
The pass phrase is: SIX
The pass phrase is: TWELVE
The pass phrase is: ZERO

*/
// print all lines in txt file
