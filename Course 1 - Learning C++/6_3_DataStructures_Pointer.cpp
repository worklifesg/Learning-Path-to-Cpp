// Program to define pointers

#include <iostream>

using namespace std;

int main()
{
	int v1 =0 ; // initialize v1=0
	int *p1; //define a pointer p1
	
	p1 = &v1; //referencing p1 to v1
	
	cout << "Before v1 is: " << v1 << " and p1 is: " << *p1 <<endl;
	
	*p1 = 42; // assing v1 as 42 by referencing through p1 pointer
	
	cout << "v1 is: " << v1 << " and p1 is: " << *p1 <<endl;
	
}

// Before v1 is: 0 and p1 is: 0
// v1 is: 42 and p1 is: 42
