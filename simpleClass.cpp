//============================================================================
// Author      : Tom Bielawski
// Description : This program demonstrates a simple class with member functions
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

//Declare Circle class
class Circle
{
	private:
		double radius;

	public:
		void setRadius(double r)
		{ radius = r; }

		double calcArea()
		{ return 3.14 * pow(radius, 2); }
};

int main()

{

	//Define 2 circle objects
	Circle circle1;
	Circle circle2;

	//Call the setRadius function for each circle
	circle1.setRadius(1); //Sets circle1's radius to 1
	circle2.setRadius(2.5); //Sets circle2's radius tp 2.5

	//Call the calcArea function for each circle
	//Display the returned result
	cout<< "The area of Circle 1 is " << circle1.calcArea() << endl;
	cout<< "The area of Circle 2 is " <<circle2.calcArea() << endl;
}
