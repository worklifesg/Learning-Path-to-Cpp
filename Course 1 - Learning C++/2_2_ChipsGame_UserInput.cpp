// Games of chips (Stones and Nim) - end up with random pile of rock and chips
// User input

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	//varialbe to keep track of whose turn it is (player 1 turn- True else player 2 turn - False
	
	bool player1turn = true;
	// declare a boolean variable when game is over
	bool gameover = false;
	
	int chipsInPile = 0;
	int chipsTaken = 0;
	
	cout << "How many chips would you like in your starting pile? \n";
	cin >> chipsInPile;
	
	cout << "This round will start with " << chipsInPile << " chips in the pile. \n";
	
	return 0;
}
