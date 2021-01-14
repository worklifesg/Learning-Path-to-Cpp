// Games of chips (Stones and Nim) - end up with random pile of rock and chips
// random number generator for chips in pile.
// want to add rule as well that at each turn no one can take more than 0.5-% of total chips
// Also personalize names of player [ARRAYS]
// If else statement
// do while loop - check whether the chips taken per player is valid number
// gameover if chips are finished

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
	
	// to continue the play till the game is over, we need to run while loop
	
	while(gameover == false)
	{
		do
		{
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
		} while(chipsTaken > (static_cast<int>(chipsInPile*MAX_TURN)) && (chipsInPile > 1)); 
		
		// if player tooks chips more than maximum allowed, the loop will start again and player has to choose chips again
		// second condition is as it 1 chip comes in pile this while loop might come in infinite loop
		
		chipsInPile = chipsInPile - chipsTaken;
		cout << "There are: " << chipsInPile << " left in the pile \n";
		
		//to make game over (i.e. true)
		
		if (chipsInPile == 0)
		{
			gameover  = true;
		}
		else
		{
			player1turn =! player1turn; // makes player 1 turn false, as player 2 true
		}
	}
	return 0;
}

/*
Player 1, Please enter your name:
Shraman
Player 2, Please enter your name:
Pragati
This round will start with 9 chips in the pile.
Shraman How many chips would you like?
You can only take 4
4
There are: 5 left in the pile
Pragati How many chips would you like?
You can only take 2
2
There are: 3 left in the pile
Shraman How many chips would you like?
You can only take 1
1
There are: 2 left in the pile
Pragati How many chips would you like?
You can only take 1
1
There are: 1 left in the pile
Shraman How many chips would you like?
You can only take 0
1
There are: 0 left in the pile

--------------------------------
*/
