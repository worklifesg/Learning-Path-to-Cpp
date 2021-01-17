// Pointer Memory Allocation

#include<iostream>

using namespace std;

int main()
{
	cout << "Size of boolean: " << sizeof(bool) << " Bytes" << endl;
	cout << "Size of char: " << sizeof(char) << " Bytes" << endl;
	cout << "Size of short: " << sizeof(short) << " Bytes" << endl;
	cout << "Size of int: " << sizeof(int) << " Bytes" << endl;
	cout << "Size of float: " << sizeof(float) << " Bytes" << endl;
	cout << "Size of long: " << sizeof(long) << " Bytes" << endl;
	cout << "Size of double: " << sizeof(double) << " Bytes" << endl;
	
	bool* pbool;
	char* pchar;
	int* pint;
	
	cout << "Size of boolean pointer: " << sizeof(pbool) << " Bytes" << endl;
	cout << "Size of char pointer: " << sizeof(pchar) << " Bytes" << endl;
	cout << "Size of int pointer: " << sizeof(pint) << " Bytes" << endl;
	
	return 0;
}

/*
Size of boolean: 1 Bytes
Size of char: 1 Bytes

Size of short: 2 Bytes

Size of int: 4 Bytes
Size of float: 4 Bytes
Size of long: 4 Bytes

Size of double: 8 Bytes

Size of boolean pointer: 8 Bytes
Size of char pointer: 8 Bytes
Size of int pointer: 8 Bytes

Note size of pointer is 4 Bytes in 32 Bit systems 
*/
