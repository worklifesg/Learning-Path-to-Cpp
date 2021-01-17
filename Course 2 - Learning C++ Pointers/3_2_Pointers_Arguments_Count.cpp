// Passing pointers as arguments
//

#include <iostream>
using namespace std;

double averageCost(double* priceArray, int* count)
{
	double sum = 0;
	for(int i = 0; i < *count; i++)
	{
		sum += *(priceArray + i);
	}
	return sum/ *count;

}
int main()
{
	double prices[5]{ 5.00, 4.50, 3.75, 3.10, 6.75 };
	int quantity = 5;
	double average = averageCost(prices,&quantity);
	cout << "$" << average << endl;

    return 0;
}

//$4.62 
