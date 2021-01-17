// Character pointer

#include<iostream>

using namespace std;

int main()
{
	char initial = 'P';
	char *pInitial = &initial;
	
	cout << "Memory Address for initial P: " << pInitial <<endl;
	
	return 0;
}
/* memory address has some strange characters as the compiler wants to print out actual initial as a string because characters actually points to strings
// to get address of a char we need to do 'casting'
Memory Address for initial P: P¦o
*/
