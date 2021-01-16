#include <iostream> 
 #include <ctime>
 #include <cstdlib>
using namespace std; 
 
string FindPlayerName(string names[], bool playerTurn);
int askMove(bool player1Turn, int chipsInPile, string names[]);
void getUserNames (string players[]);

const float MAX_TURN = .5;
const int MAX_CHIPS = 100;

int main()  
{  
  bool player1Turn = true;  
 
  bool gameOver = false;    
  
  int chipsInPile = 0;  
  int chipsTaken = 0; 

  char userChoice;
  string playerNames[2];
  
  //seed the random number generator
   srand(time(0));
  
  //ask the players for their names, then store in an array
 getUserNames(playerNames);
 
  
  //start the game with a random number of chips in the pile
  do
  {
	chipsInPile = (rand() % MAX_CHIPS) + 1;

  	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
    gameOver = false;
    while (gameOver == false)
	{
     chipsTaken = askMove(player1Turn, chipsInPile, playerNames);
	 chipsInPile = chipsInPile - chipsTaken;
	 cout << "There are " << chipsInPile << " left in the pile\n";
	 player1Turn = !player1Turn;
	 if (chipsInPile == 0)
	 {
	 	gameOver = true;
	    cout << FindPlayerName(playerNames, player1Turn) << ", congratulations you won\n";	
	 }
 	}
  	cout << "Do you wish to play again? (Y/N)\n";
    cin >> userChoice;
    userChoice = toupper(userChoice);
   }while ( userChoice == 'Y');  
  return 0; 
} 
////////////////////////////////////////////////////////////////////////////////////
void getUserNames (string players[])
{
cout << "Player 1, please enter your name: ";
  cin >> players[0];
  cout << "\nThanks and good luck!" << endl;
  cout << "Player 2, please enter your name \n (If you wish to play against the computer, enter AI): ";
  cin >> players[1];
  cout << "\nThanks and good luck! \n";
}
////////////////////////////////////////////////////////////////

string FindPlayerName(string names[], bool playerTurn)
{
	if (playerTurn == true)
		return names[0];
	else
		return names[1];
}
 ///////////////////////////////////////////////////////////////////////////////////
int askMove(bool player1Turn, int chipsInPile, string names[])
{
	int chipsTaken;
	int maxPerTurn = MAX_TURN * chipsInPile;
	do
     {	
  		cout << FindPlayerName(names, player1Turn) << " How many chips would  you like?\n";
		
    	cout << "You can take up to ";
		if (( maxPerTurn ) == 0)
		{
			cout << " 1\n";
		}
		else
		{
			cout << maxPerTurn << endl;
		}
		if (FindPlayerName(names, player1Turn) == "AI")
         {
          		if (maxPerTurn == 0)
          		{ 
          			chipsTaken = 1;
		  		}
		  		else
		  		{
		  			chipsTaken = (rand() % maxPerTurn) + 1;
				}
		 }
		else
		{
    	   cin >> chipsTaken;
	    }
     } while ((chipsTaken > maxPerTurn )  && (chipsInPile > 1));
     return chipsTaken;
}
