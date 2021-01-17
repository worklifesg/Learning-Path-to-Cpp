// Program to define struct data structure

#include<iostream>

using namespace std;

struct students
{
	string name;
	float GPA;
};

int main()
{
	//declare instance of struct
	students Teacher;
	//access teacher name
	Teacher.name = "Dr. Colvin";
	
	//create entire class
	students firstPeriod[10]; // 10 students in first period
	
	firstPeriod[0].name = "Tom";
	firstPeriod[0].GPA = 4.0;
	
	//can't reference same data to all students using struct
	// cant' print entire struct as well
	// cant' print in which order to print as well.
	
	cout << firstPeriod[0].name << endl; // need to print by individual reference and assigned datatype
}
