// pointers vs arrays

#include<iostream>

using namespace std;

int main()
{
	double values[10]; //array name automatically contains the address and can use to initialize a pointer
	double *pvalue = values; //didn't use & to reference pointer to a variable.
	
	cout <<"values array address: " << values <<endl;
	cout <<"pvalues: " << pvalue <<endl;
	
	//also we can modify the address stored in a pointer but in array the values are stored in a fized address.
}

/*
values array address: 0x6ffdc0
pvalues: 0x6ffdc0
*/
