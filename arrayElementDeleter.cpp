//arrayElementDeleter.cpp
//Tom Bielawski
//February 20, 2020
//Program to remove an element chosen by the user from an array

#include <iostream>
using namespace std;

//Constants for while loop input validation and array size.
const int MIN_CHOICE = 0;
const int MAX_CHOICE = 5;
const int PLACES = 6;

//Function Prototype for removing the user's selected element
int removeElement(int [], int, int);
int main()
{
	int numArray[PLACES] = {10, 20, 30, 40, 50, 60};
	cout << "Original Array" << endl;

	//For loop to read the size of the Original loop and display.
	for (int index = 0; index < PLACES; index++)
	{
		cout << numArray[index] << "   ";
    }

    //Get the user's choice of element to delete
    cout << "\n\nPlease choose an element to delete, 0 - 5" << endl;
    int userChoice;
    cin >> userChoice;

    //Validate the user's input is acceptible
    //If not, the user is prompted to try again.
    while (userChoice < MIN_CHOICE || userChoice > MAX_CHOICE)
    {
        cout << "Invalid choice. Please choose from elements 0 through 5." << endl;
        cin >> userChoice;
    }

    //Call the function to remove the user's selected element
    //Passes the array as "numArray", passes the array elements as "places", and passes
    //The user's selected element as "userChoice."
    removeElement(numArray, PLACES, userChoice);

}

//Function to remove the selected element.
int removeElement(int numArray[], int PLACES, int userChoice)
{
    //Index set to userChoice
    int index = userChoice;
    //Index advances the element by 1.
    numArray[index] = numArray[index+1];

    cout << "\nThe new array is: " << endl;
    //For loop to display the contents of the new array.
	for (int index = 0; index < PLACES-1; index++)
	{
		cout << numArray[index] << "  ";
	}

}
