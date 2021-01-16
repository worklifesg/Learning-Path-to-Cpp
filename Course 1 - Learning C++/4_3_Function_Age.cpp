// Happy Birthday function program passed by reference

#include<iostream>

using namespace std;

void printHBD();
void printHBD(string, int&);

int main()
{
	int myage;
	printHBD();
	printHBD();
	cout << "Happy Birthday dear user\n";
	
	cout <<"\nEnter your age\n";
	cin >> myage;
	
	cout << "1. My age is: " << myage << endl; // age before function

	printHBD("John",myage);
	
	cout << "\n2. My age is: " <<myage <<endl; // age after function is executed and it changes myage as it is passed by reference and myage and age shares same memeory location
}

void printHBD()
{
	cout << "Happy Birthday to you\n"; 
}
void printHBD(string name, int& age)
{
	cout << "Happy Birthday " << name;
	age = age+10;
}

//Arrays in general are passed by default by reference

/*
Happy Birthday to you
Happy Birthday to you
Happy Birthday dear user

Enter your age
18
1. My age is: 18
Happy Birthday John
2. My age is: 28
*/
