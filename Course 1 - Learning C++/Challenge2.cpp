// Challenge 2 - Rnadom number generator

/*Games of chips (Stones and Nim) - end up with random pile of rock and chips
 - random number generator for chips in pile.
 - want to add rule as well that at each turn no one can take more than 0.5-% of total chips
 - Also personalize names of player [ARRAYS]
 - Variable to hold max turn and chipsinPile product
 - using the variable create random nubmer as the number taken to play aginst computer */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = 0.5;

int main()
{
	
	bool player1turn = true;
	bool gameover = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	int maxperTurn = 0; // Variable to hold max turn and chipsinPile product
	
	srand(time(0));
	
	//if to ask user to input name
	string playerName[2];
	cout << "Player 1, Please enter your name: \n";
	cin >>playerName[0];
	cout << "Player 2, Please enter your name: \n";
	cin >>playerName[1];
	
	
	chipsInPile = (rand() % MAX_CHIPS)+1;
	
	cout << "This round will start with " << chipsInPile << " chips in the pile. \n";
	
	maxperTurn = chipsInPile*MAX_TURN;
	
	cout << "You can only take " << maxperTurn<< endl; 
	chipsTaken = (rand() %maxperTurn)+1;
	
	cout <<"Number taken: " << chipsTaken << endl;
	
	return 0;
}
