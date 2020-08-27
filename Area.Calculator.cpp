//============================================================================
// Name        : Area.Calculator.cpp
// Author      : Tom Bielawski
// Date		   : February 3, 2020
// Description : Calculates area of various shapes.
//============================================================================


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//Declare constant for pi, int to capture user's choice
    const float PI = 3.14159; // use Upeprcase F at end of Float, else causes type conversion.

    int yourChoice;
    //Next time use constants instead of putting variables in each case
    //Welcome menu with choices
    cout << "\nWelcome to the Area Calculator" << endl;
    cout << "   1. Calculate the Area of a Triangle." << endl;
    cout << "   2. Calculate the Area of a Rectangle." << endl;
    cout << "   3. Calculate the Area of a Circle." << endl;
    cout << "   0. Exit." << endl;
    cout << "\nPlease enter your choice ==> " << endl;
    cin >> yourChoice;

    //Switch and variables for Case 1 calculations for area of triangle
    switch (yourChoice)
    {
    float area;
    float height;
	float base;

	//Case 1 options and get input
    case 1:
    cout << "Your choice is triangle." << endl;
    cout << "Enter the base of the triangle. " << endl;
    cin >> base;

    //Validation of input and continue or reject data.
    if (base > 0)
    {
    	cout << "Enter the height of the triangle. ";
    	cin >> height;

        if (height > 0 )
        {
        	area = (base * height) * .5;
            cout << "The area of the triangle is " << endl;
            cout << fixed << setprecision(2) << area << endl;

        }
        else
        {

            cout << "Your entries must be greater than 0." << endl;
            cout << "Rerun the program and try again." << endl;

        }

     }
     else
     {
    	 cout << "Your entries must be greater than 0.\n" << endl;
    	 cout << "Rerun the program and try again. " << endl;
     }
    //Break from Case 1
    break;

    //Case 2 area of rectangle. Declare variables for computation and get input
    case 2:
    float width;
	float length;

	//User input
	cout << "Your choice is rectangle." << endl;
    cout << "Enter the length of the rectangle. " << endl;
    cin >> length;

    //Validate user input and continue or reject
    if (length > 0)
    {
    	cout << "Enter the width of the rectangle. " << endl;
        cin >> width;

        if (width > 0)
        {
        	area = length * width;
            cout << "The area of rectangle is " << endl;
            cout << fixed << setprecision(2) << area << endl;


        }
        else
        {
        	cout << "Your entries must be greater than 0." << endl;
            cout << "Rerun the program and try again. " << endl;
        }

     }
     else
     {
    	 cout << "Your entries must be greater than 0.\n" << endl;
    	 cout << "Rerun the program and try again. " << endl;
         }
         break;

    //Case 3 area of a circle. Declare variables and get input.
    case 3:
    	int radius;
    	cout << "Your choice is circle." << endl;
    	cout << "Enter the radius of the circle: " << endl;
    	cin >> radius;

    	//Input validation and continue or reject.
    	if (radius < 1)
    	{
    		cout << "Your entries must be greater than 0" << endl;
    		cout << "Rerun the program and try again. " << endl;

    	}
    	else
    	{
            area = PI * pow(radius, 2);

            cout << "The area of the circle is  " << endl;
            cout << fixed << setprecision(2) << area << endl;
        }
        break;

    //This option lets the user end the program without choosing a shape.
    case 0:
    cout << "Good-bye." << endl;
    break;

    //This is the default for an invalid menu entry.
    default:
    cout << "You must choose 1, 2, 3 or 0. " << endl;
    cout << "Rerun the program and try again." << endl;

    break;
    }


    return 0;
}


