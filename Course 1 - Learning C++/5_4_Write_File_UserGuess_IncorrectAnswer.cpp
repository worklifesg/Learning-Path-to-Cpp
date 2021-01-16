// Program to write a new .txt file

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream inStream; // intialize reading the files using ifstream
	inStream.open("passphrase.txt"); // open  a file
	
	ofstream outStream;
	outStream.open("Newpassphrase.txt"); // to enter the data in new txt file where user didn't correctly give answers
	
	string passphrase;
	int userGuess = 0;
	
	if(!inStream.fail())
	{
		while(inStream >> passphrase)
		{
			cout << "The pass phrase is: " << passphrase <<endl;
			cout << "What is your answer?\n";
			cin >> userGuess;
			if(userGuess == passphrase.length()) // if the answer is same as length of string, it is correct answer else need to try again for the following string.
			{
				cout << "Congrats\n";
			}
			else
			{
				cout << "Sorry try again later\n";
				outStream << passphrase << endl;
			}
		}
	}

inStream.close();	
outStream.close();
}

/* Only two incorrect answers will be written in newpassphrase file.

Output:
The pass phrase is: TWENTY
What is your answer?
8
Sorry try again later
The pass phrase is: TEN
What is your answer?
4
Sorry try again later
The pass phrase is: FIVE
What is your answer?
4
Congrats
The pass phrase is: THREE
What is your answer?
5
Congrats
The pass phrase is: SIX
What is your answer?
3
Congrats
The pass phrase is: TWELVE
What is your answer?
6
Congrats
The pass phrase is: ZERO
What is your answer?
4
Congrats
*/
