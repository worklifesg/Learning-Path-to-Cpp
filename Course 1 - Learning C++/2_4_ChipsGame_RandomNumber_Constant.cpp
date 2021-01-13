// Games of chips (Stones and Nim) - end up with random pile of rock and chips
// random number generator for chips in pile.
// using const function

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


//number used multiple times in the program ex. 100 in chipsInPile equation

const int MAX_CHIPS = 100;

int main()
{
	//varialbe to keep track of whose turn it is (player 1 turn- True else player 2 turn - False
	
	bool player1turn = true;
	// declare a boolean variable when game is over
	bool gameover = false;
	
	int chipsInPile = 0;
	int chipsTaken = 0;
	
	srand(time(0));
	chipsInPile = (rand() % MAX_CHIPS)+1;
	
	cout << "This round will start with " << chipsInPile << " chips in the pile. \n";
	
	return 0;
}
