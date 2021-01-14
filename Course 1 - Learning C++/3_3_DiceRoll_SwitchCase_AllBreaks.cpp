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
			break;
		case 2:
			cout << " Two \n";
			break;
		case 3:
			cout << " Three \n";
			break;
		case 4:
			cout << " Four \n";
			break;
		case 5:
			cout << " Five \n";
			break;
		case 6:
			cout << " Six \n";
			break;
		
		default:
			cout << " Invalid \n";
			break;
	}
	
	
	return 0;
}

/* It will print only statement corresponding to the satisfied case
You rolled a 1
 One
 */
