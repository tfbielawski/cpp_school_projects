//Sales.cpp
//Tom Bielawski
//March 30, 2020
//Program to calcalulate the difference in quarterly sales

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getSales(double *sales, int size);
double totalSales(double *sales, int size);

//Declaration for diffSales function prototype 
void diffSales (double* array, int size);

//Main function
int main()
{
	//Declare constant integerand sales array
	const int QUARTERS = 4;
	double sales[QUARTERS];

	// Get the sales data for all quarters
	getSales(sales, QUARTERS);
  
	// Set the numeric output formatting
	cout << setprecision(2);
	cout << fixed << showpoint;

	// Display the total sales for the year
	cout << "The total sales for the year are $" << totalSales(sales, QUARTERS) << endl;
	
	//Call diffSales function passing sales and QUARTERS
	diffSales (sales, QUARTERS);
	return 0;
}

// getSales function uses a pointer to accept the address
// of an array of doubles. The number of elements in
// the array is passed as a separate integer parameter. The
// The function asks the  user to enter the sales figures for
// four quarters, then stores those figures in the array using
// subscript notation.
void getSales(double *array, int size)
{
	for (int count = 0; count < size; count++)
	{
    cout << "Enter the sales figure for quarter ";
    cout << (count + 1) << ": ";
    cin >> array[count];
	}
}
// totalSales function uses a pointer to
// accept the address of an array of doubles whose size is
// is passed as a separate parameter. The function uses pointer
// notation to sum the elements of the array.
double totalSales(double *array, int size)
{
	double sum = 0.0;
	for (int count = 0; count < size; count++)
	{
		sum += *array;
		array++;
	}
	return sum;
}

//diffSales function to calculate the difference in quarterly sales
//entered by user
void diffSales(double *array, int size)
{
	//for loop to pass through array a
	//cout statement with pointers performs calculations and outputs quartely differences
	for (int count = 0; count < size - 1; count++)
	{
		cout << " The difference between quarter "<< count+1  << " " << "and quarter " 
		<< count+2 << " is: $" << *(array +1) - (*array) << endl;
		array++;
	}
	
}
