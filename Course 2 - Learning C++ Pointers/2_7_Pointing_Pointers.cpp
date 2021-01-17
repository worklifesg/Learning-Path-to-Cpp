// Pointing a Pointer to Another Pointer

#include<iostream>

using namespace std;

int main()
{
	int num = 10;
	int *pNum = &num; // putting the address of num into pNum
	int **p2Num = &pNum; // equals to the address of the pointer that points to num variable
	
	cout <<"Address of num: " << &num << endl;
	cout <<"Address stored in pNum: " <<pNum <<endl;
	cout <<"Address of pNum: " <<&pNum<< endl;
	cout <<"Address stored in p2Num: " <<p2Num<<endl;
	
	return 0;
}
/*
Address of num: 0x6ffe04
Address stored in pNum: 0x6ffe04
Address of pNum: 0x6ffdf8
Address stored in p2Num: 0x6ffdf8
*/
