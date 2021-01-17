// Address vs Pointers - Define entry point for the console application

#include<iostream>

using namespace std;

int main()
{
	int num = 20; //define an int variable
	int *numPtr;  //define an int pointer numpPtr
	
	numPtr = &num; //assign the address to numPtr '&' get the address of the piece of data
	
	cout << "The address of number is: " << numPtr <<endl;
	
	return 0;
}

/*
The address of number is: 0x6ffe14
*/
