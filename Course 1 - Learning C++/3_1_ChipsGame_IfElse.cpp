// Games of chips (Stones and Nim) - end up with random pile of rock and chips
// random number generator for chips in pile.
// want to add rule as well that at each turn no one can take more than 0.5-% of total chips
// Also personalize names of player [ARRAYS]
// If else statement

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


//number used multiple times in the program ex. 100 in chipsInPile equation

const int MAX_CHIPS = 100;
const float MAX_TURN = 0.5;

int main()
{	
	bool player1turn = true;
	bool gameover = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	
	string playerName[2];
	
	srand(time(0));
	
	cout << "Player 1, Please enter your name: \n";
	cin >>playerName[0];
	cout << "Player 2, Please enter your name: \n";
	cin >>playerName[1];
	
	
	chipsInPile = (rand() % MAX_CHIPS)+1;
	
	cout << "This round will start with " << chipsInPile << " chips in the pile. \n";
	
	if(player1turn == true)
	{
		cout << playerName[0] << " How many chips would you like?\n";
	}
	else
	{
		cout << playerName[1] << " How many chips would you like?\n";
	}
	
	cout << "You can only take " << static_cast<int>(chipsInPile*MAX_TURN) << endl; //output int value
	
	cin >> chipsTaken;
	
	return 0;
}
