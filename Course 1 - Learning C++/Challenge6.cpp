//Challenge 6

#include <iostream> 
 #include <ctime>
 #include <cstdlib>
#include <fstream>

using namespace std; 


struct player
{
   string name;
   int numWins;	
}; 


string FindPlayerName(player[], bool playerTurn);
int askMove(bool player1Turn, int chipsInPile, player[]);
void getUserNames (player []);
void addWin(player[], bool);

const float MAX_TURN = .5;
const int MAX_CHIPS = 100;

/////////////////////////////////////////////////////////
int main()  
{  
  bool player1Turn = true;  
 
  bool gameOver = false;    
  int moveCounter = 0;
  int chipsInPile = 0;  
  int chipsTaken = 0; 

  char userChoice;
  player Players[2];
  
  //Output file variables 
  ofstream outFile;
  outFile.open("Winners1.txt", ios::app);
  
  //seed the random number generator
   srand(time(0));
  
  //ask the players for their names, then store in an array
   getUserNames(Players);
 
  
  //start the game with a random number of chips in the pile
  do
  {
	chipsInPile = (rand() % MAX_CHIPS) + 1;

  	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
    gameOver = false;
    moveCounter = 0;
    while (gameOver == false)
	{
     chipsTaken = askMove(player1Turn, chipsInPile, Players);
	 chipsInPile = chipsInPile - chipsTaken;
	 cout << "There are " << chipsInPile << " left in the pile\n";
	 player1Turn = !player1Turn;
	 moveCounter++;
	 if (chipsInPile == 0)
	 {
	 	gameOver = true;
	    cout << FindPlayerName(Players, player1Turn) << ", congratulations you won\n";	
	    outFile << FindPlayerName(Players, player1Turn) << " won in " << moveCounter << " moves";
		addWin(Players, player1Turn);	
	 }
 	}
  	cout << "Do you wish to play again? (Y/N)\n";
    cin >> userChoice;
    userChoice = toupper(userChoice);
    
   }while ( userChoice == 'Y'); 
   cout << Players[0].name << " had " << Players[0].numWins << " total wins this round " << endl;
   cout << Players[1].name << " had " << Players[1].numWins << " total wins this round " << endl;
   outFile.close(); 
  return 0; 
} 
////////////////////////////////////////////////////////////////////////////////////
void getUserNames (player Players[])
{
cout << "Player 1, please enter your name: ";
  cin >> Players[0].name;
  cout << "\nThanks and good luck!" << endl;
  cout << "Player 2, please enter your name \n ";
  cout << "(If you wish to play against the computer, enter AI): ";
  cin >> Players[1].name;
  cout << "\nThanks and good luck! \n";
  Players[0].numWins = 0;
  Players[1].numWins = 0;
}
////////////////////////////////////////////////////////////////

string FindPlayerName(player Players[], bool playerTurn)
{
	if (playerTurn == true)
		return Players[0].name;
	else
		return Players[1].name;
}
 ///////////////////////////////////////////////////////////////////////////////////
int askMove(bool player1Turn, int chipsInPile, player Players[])
{
	int chipsTaken;
	int maxPerTurn = MAX_TURN * chipsInPile;
	do
     {	
  		cout << FindPlayerName(Players, player1Turn) << " How many chips would  you like?\n";
		
    	cout << "You can take up to ";
		if (( maxPerTurn ) == 0)
		{
			cout << " 1\n";
		}
		else
		{
			cout << maxPerTurn << endl;
		}
		if (FindPlayerName(Players, player1Turn) == "AI")
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
///////////////////////////////////////////////////////////
void addWin(player Players[], bool player1Turn)
{
	if (player1Turn)
	{
		Players[0].numWins++;
	}
	else
	{
		Players[1].numWins++;
	}
}
