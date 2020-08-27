//============================================================================
//arrayLargestElement.cpp
//Tom Bielawski
// 3-16-2020
// Professor D. Singletary FSCJ
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	const int LARGE_NUM = 6;
	int arrayPrac[LARGE_NUM];

	cout << "Enter the numbers in the array." << endl;
	cout << "Enter the first number: " << endl;
	cin >> arrayPrac[0];
	cout << "Enter the second number: " << endl;
	cin >> arrayPrac[1];
	cout << "Enter the third number: " << endl;
	cin >> arrayPrac[2];
	cout << "Enter the fourth number: " << endl;
	cin >> arrayPrac[3];
	cout << "Enter the fifth number: " << endl;
	cin >> arrayPrac[4];
	cout << "Enter the sixth and last number: " << endl;
	cin >> arrayPrac[5];

	int count, highest;

	highest = arrayPrac[0];
	for (count = 1; count < LARGE_NUM; count++)
	{
		if (arrayPrac[count] > highest )
			highest = arrayPrac[count];
	}
    cout << "The largest element in the array is: " << highest << endl;


}
