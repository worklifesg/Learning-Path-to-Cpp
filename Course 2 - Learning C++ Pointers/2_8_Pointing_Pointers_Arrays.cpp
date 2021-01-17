// Pointing to pointers - Array of pointers

#include<iostream>

using namespace std;

int main()
{
	//array of pointers
	int testScore[5]{100,95,99,85,83};
	int *pointerArray[5];
	
	for (int i =0; i<5;i++)
	{
		//populate array
		pointerArray[i]=&(testScore[i]); //address of each element in testScore array and references the addresses to the pointerArray
		cout << pointerArray[i]<<endl; 
	}
	cout << "De-referencing the array using * yields: \n" ;
	
	for (int i =0; i<5;i++)
	{
		//populate array
		pointerArray[i]=&(testScore[i]); 
		cout << *(pointerArray[i]) <<endl;
	}
	
	cout << "De-referencing  by adding index to the array using * yields: \n" ;
	
	for (int i =0; i<5;i++)
	{
		//populate array
		pointerArray[i]=&(testScore[i]); 
		cout << *(pointerArray+i) <<endl;
	}
	
	cout << "De-referencing  the pointer by the pointer to print values of array using * yields: \n" ;
	
	for (int i =0; i<5;i++)
	{
		//populate array
		pointerArray[i]=&(testScore[i]); 
		cout << **(pointerArray+i) <<endl;
	}
	
	return 0;
}

/*
0x6ffdf0
0x6ffdf4
0x6ffdf8
0x6ffdfc
0x6ffe00
De-referencing the array using * yields:
100
95
99
85
83
De-referencing  by adding index to the array using * yields:
0x6ffdf0
0x6ffdf4
0x6ffdf8
0x6ffdfc
0x6ffe00
De-referencing  the pointer by the pointer to print values of array using * yields:
100
95
99
85
83
*/
