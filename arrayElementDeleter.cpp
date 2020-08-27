//Tom Bielawski
// 02-20-2020
//Professor D. Singletary FSCJ
// A program to delete an element from an array based on 
//user input

#include <iostream>
using namespace std;
int main()
{

    int places = 6;
	int numArray[places] = {10, 20, 30, 40, 50, 60};
	cout << "Original Array" << endl;
	for (int index = 0; index < places; index++)
		cout << numArray[index] << "   ";

	cout << "Enter the position you want to delete " << endl;
	int elementGone;
	cin >> elementGone;

	for (int index = elementGone; index < places; index ++)
	{
		int temp = numArray[index];
		numArray[index] = numArray[index+1];
		numArray[index+1] = temp;
	}

    cout << "The new array is: " << endl;

	for (int index = 0; index < places-1; index++)
	{
		cout << numArray[index] << "  ";
	}
}
