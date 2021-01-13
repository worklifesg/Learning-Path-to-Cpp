// Games of chips (Stones and Nim) - end up with random pile of rock and chips
// random number generator for chips in pile.
// want to add rule as well that at each turn no one can take more than 0.5-% of total chips
// Also personalize names of player [ARRAYS]

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


//number used multiple times in the program ex. 100 in chipsInPile equation

const int MAX_CHIPS = 100;
const float MAX_TURN = 0.5;

int main()
{
	//varialbe to keep track of whose turn it is (player 1 turn- True else player 2 turn - False
	
	bool player1turn = true;
	// declare a boolean variable when game is over
	bool gameover = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	
	//string player1;
	//string player2;
	
	//for multiple players we need to create array of strings
	
	//If to give names here
	
	/*string playerName[2] = {'Tom','Jake'}; //playername at index 0 and 1 only
	playername[0] = 'Jake';*/
	
	//if to ask user to input name
	string playerName[2];
	cout << "Player 1, Please enter your name: \n";
	cin >>playerName[0];
	cout << "Player 2, Please enter your name: \n";
	cin >>playerName[1];
	
	//int tictactow[3][3] //3 x 3 tictactoe board
	 
	
	
	srand(time(0));
	chipsInPile = (rand() % MAX_CHIPS)+1;
	
	cout << "This round will start with " << chipsInPile << " chips in the pile. \n";
	
	//if chipsinPile is odd then it returns a decimal value which is not possible here
	
	//so we add static_cast function
	
	cout << "You can only take " << static_cast<int>(chipsInPile*MAX_TURN) << endl; //output int value
	
	return 0;
}
