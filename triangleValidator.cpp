//Tom Bielawski
//8/16/2020
//C++ Beginner Projects www.codeboks.com
//Write a C++ program to check triangle by entering 3 angles.

#include <iostream>
using namespace std;

//Void instead of int main.
int main()
{
    //Declare three variables to hold user-entered data.
    float angle1;
    float angle2;
    float angle3;

    // escape character \n = new line, \t inserts a tab space
    //Output to begin the program

    //Use cout function to create a "header" for the program
    cout <<"\n\t----------------------------------------\n";
    //\t pushes the output as though a tab key were pressed
    cout <<"\t\t:Program to check a Triangle:\n";
    cout <<"\t----------------------------------------\n\n";
    //Ask for input and store in float variables
    cout <<"Enter the angles of a triangle. \n";
    cout <<"Enter Angle 1\n";
    cin >> angle1;
    cout <<"Enter Angle 2\n";
    cin >> angle2;
    cout <<"Enter Angle 3\n";
    cin >> angle3;
    if(angle1 + angle2 + angle3 == 180)
    {
        cout << "This is a valid triangle.";
    }
    else
        {
        cout << "This is not a valid triangle. Please run the program again." << endl;
        }

//Getch() reads a single character from the keyboard but doesn't display
getchar();
}
