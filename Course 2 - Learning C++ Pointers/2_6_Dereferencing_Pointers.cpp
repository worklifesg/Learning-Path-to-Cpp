// Program to explain De-referencing pointers

#include<iostream>

using namespace std;

int main()
{
	double testScores[5], sum=0;
	double *pTestScores; // pointer to array
	
	pTestScores = testScores; // referencing address of array to pointers
	
	for (int i=0;i<5;i++) // loop to tneter testscore
	{
		cout << "Enter the test score: " << endl;
		cin >> *(pTestScores + i); // de-reference pointers - take data input from the user and put in (pTestScore+i) pointer memory address location.
		sum += *(pTestScores + i);
	}
	cout << "Test Scores: " << testScores <<endl; //print the address
	cout << "Total for all: " << sum << endl;
	cout << "Average Score: " << sum/5 <<endl;

return 0;
}

/*
Enter the test score:
20
Enter the test score:
19
Enter the test score:
19.5
Enter the test score:
18
Enter the test score:
20
Test Scores: 0x6ffdd0
Total for all: 96.5
Average Score: 19.3
*/
