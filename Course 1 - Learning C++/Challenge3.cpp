// Games of chips (Stones and Nim) - end up with random pile of rock and chips
// random number generator for chips in pile.
// want to add rule as well that at each turn no one can take more than 0.5-% of total chips
// Also personalize names of player [ARRAYS]
// If else statement
// do while loop - check whether the chips taken per player is valid number
// gameover if chips are finished

//Challenge 3
// 1. Loop around to check that the chips taken by user is a valid number 
// 2. loop entire program - Do you want to play again, get some input (any char) only after it is finished and create a new pile of chips (same users)

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
	int maxperturn=0;
	
	string playerName[2];
	
	char userchoice; //user choice to play again or not
	
	srand(time(0));
	
	cout << "Player 1, Please enter your name: \n";
	cin >>playerName[0];
	cout << "Player 2, Please enter your name: \n";
	cin >>playerName[1];
	
	do // loop to play again one
	{
		
	
		chipsInPile = (rand() % MAX_CHIPS)+1;
		
		cout << "This round will start with " << chipsInPile << " chips in the pile. \n";
		
		gameover = false; // update as at the end it becomes true so to start again we need to intialize again as false to start the game again
		// to continue the play till the game is over, we need to run while loop
		
		while(gameover == false)
		{
			do
			{
				maxperturn = (chipsInPile*MAX_TURN);
				if(player1turn == true)
				{
					cout << playerName[0] << " How many chips would you like?\n";
				}
				else
				{
					cout << playerName[1] << " How many chips would you like?\n";
				}
			
				//cout << "You can only take " << static_cast<int>(chipsInPile*MAX_TURN) << endl; //output int value
				
				cout << "You can only take ";
				if (maxperturn == 0)
				{
					cout << " 1\n";
				}
				else
				{
					cout << maxperturn << endl;
				}
			
				cin >> chipsTaken;
			} while((chipsTaken > (maxperturn)) && (chipsInPile > 1)); 
			
			// if player tooks chips more than maximum allowed, the loop will start again and player has to choose chips again
			// second condition is as it 1 chip comes in pile this while loop might come in infinite loop
			
			chipsInPile = chipsInPile - chipsTaken;
			cout << "There are: " << chipsInPile << " left in the pile \n";
			
			//to make game over (i.e. true)
			
			if (chipsInPile == 0)
			{
				gameover  = true;
				if (player1turn)
				{
					cout << playerName[1] << ", Congratulations you won";			
				}
				else
				{
					cout << playerName[0] << ", Congratulations you won";
				}
			}
			else
			{
				player1turn = !player1turn; // makes player 1 turn false, as player 2 true
			}
		}
		cout << "Do you wish to play again? (Y/N): \n";
		cin >> userchoice;
	} while ((userchoice == 'y')||(userchoice =='Y')); // loop to play again one
	return 0;
}

