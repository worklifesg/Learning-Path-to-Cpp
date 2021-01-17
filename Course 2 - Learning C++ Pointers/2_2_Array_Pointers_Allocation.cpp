// pointers vs arrays
// size of int pointer

#include<iostream>

using namespace std;

int main()
{
	double values[10]; //array name automatically contains the address and can use to initialize a pointer
	double *pvalue = values; //didn't use & to reference pointer to a variable.
	
	cout <<"values array address: " << values <<endl;
	cout <<"pvalues: " << pvalue <<endl;
	
	//loop to display address in array
	
	int numbers[10];
	int *pNumbers = numbers;
	
	for(int i=0;i<10;i++)
	{
		cout << "number address " << i << " : " << pNumbers+i <<endl;
	}
}

/* Last two digits of address increment by 4 bytes: 70,74,78,7c,80,84,88,8c,90,94 in Hex code
values array address: 0x6ffdc0
pvalues: 0x6ffdc0
number address 0 : 0x6ffd70
number address 1 : 0x6ffd74
number address 2 : 0x6ffd78
number address 3 : 0x6ffd7c
number address 4 : 0x6ffd80
number address 5 : 0x6ffd84
number address 6 : 0x6ffd88
number address 7 : 0x6ffd8c
number address 8 : 0x6ffd90
number address 9 : 0x6ffd94
*/
