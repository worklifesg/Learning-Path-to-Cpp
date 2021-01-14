// Hour + Min Loop using 'for' loop (nested for loop)

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Lets do for 9am to 10 am

int main()
{
	for(int h =9; h < 10; h++)
	{
		for(int m=0;m<60;m++)
		{
			for(int s=0;s<60;s++)
			{
				cout << h << ":" << m << ":" << s <<"\n";
			}
		}
	}
}
// from 9:0:0 to 9:59:59
