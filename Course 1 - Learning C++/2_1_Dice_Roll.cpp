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
	
	
	return 0;
}
