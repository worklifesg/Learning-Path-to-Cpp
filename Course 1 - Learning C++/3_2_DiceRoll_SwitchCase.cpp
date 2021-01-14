// Dice Roll - Random number generator

#include <iostream>
#include <ctime> // for srand()
#include <cstdlib>

using namespace std;


int main()
{
	int dice = 0; //intialize dice = 0 to clear any variable stored before
	
	srand(time(0)); // seed random number generator
	
	dice = (rand()%6)+1; // dice roll between 1 and 6
	cout << "You rolled a " << dice << endl;
	
	switch (dice)
	{
		case 1: // if(dice==1)
			cout << " One \n";
		case 2:
			cout << " Two \n";
		case 3:
			cout << " Three \n";
		case 4:
			cout << " Four \n";
		case 5:
			cout << " Five \n";
		case 6:
			cout << " Six \n";
			break;
		
		default:
			cout << " Invalid \n";
			break;
	}
	
	
	return 0;
}

/* It will print all statements till it find the break statement after satisfying case condition
You rolled a 3
 Three
 Four
 Five
 Six
 */
