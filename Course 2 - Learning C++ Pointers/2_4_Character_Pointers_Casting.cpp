// Character pointer using casting

#include<iostream>

using namespace std;

int main()
{
	char initial = 'P';
	char *pInitial = &initial;
	
	cout << "Memory Address for initial P: " << (void *)pInitial <<endl; //first way to do casting
	cout << "Memory Address for initial P: " << static_cast <void *>(pInitial) <<endl; // second way to do casting
	
	return 0;
}
/* to get address of a char we need to do 'casting' 
 - (void *)pInitial 
 - static_cast <void *>(pInitial) 
Memory Address for initial P: 0x6ffe17
Memory Address for initial P: 0x6ffe17
*/
