// Mod2.Assignment.cpp
// 1/19/2020
// Tom Bielawski
// Program to greet user, get random number, calculate percent of that random number.

//Including preprocessor directives
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //Declaring my variables
    string firstMiddle;
    string lastName;
    string fullName;
    unsigned seed = 0;
    float randomValue = 0;
    int high = 0;
    int low = 0;

    //Using getline to capture the first and middle instead of cin.
    cout << "Please enter your first name and middle initial: " << endl;
    getline (cin, firstMiddle);

    cout << "\nPlease enter your last name: " << endl;
    cin >> lastName;

    //Concatenate boths strings into one string called fullName.
    fullName = firstMiddle + " " + lastName;

    //Greet the user. Ask to enter the first of of two numbers. New line before and after.
    cout << "\nHello, " << fullName << ". We hope you are well today!\n";

    //Get the first of two numbers, low number first.
    cout << "\nPlease pick two numbers from 1 to 100. Enter your low number first. ";
    cin >> low;

        //Validate the number is within acceptible range. I know this might be overkill,
        //but validation is one of the few things I enjoyed from my intro to programming class.
        //I'm looking forward to learning how to validate for erroneous string entry. I
        while (low <= 0 || low >= 101)
        {
        cout << "\nYou cannot enter a number less than 1 or greater than 100. Please try again. ";
        cin >> low;
        }

    //Get the second number, this time higher.
    cout << "\nPlease enter a second number from 1 to 100.\nBe sure it's higher than your first number. ";
    cin >> high;

        //Validate second number is higher than first and within range.
        while (high <= low || high >= 101)
        {
        cout << "\nYour second number must be greater your first number but not great than 100.\nPlease try again. ";
        cin >> high;
        }

    //Seed for random generator. Calculate random number.
    seed = time(0);
    srand(seed);
    randomValue = (rand() % (high - low + 1)) + low;

    //Declare variables for calculating percent operations.
    float percentIn = 0;
    float percentOutput = 0;

    //Output random number. Input percentage.
    cout << "\nYour random number is " << randomValue << endl;
    cout << "\nPlease enter a percentage value. (fractional values are allowed): ";
    cin >> percentIn;

        //Validate the input is acceptible for a percent.
        while (percentIn <= 0 || percentIn >= 100.01)
        {
        cout << "\nYou cannot enter a percentage less than 0 or greater than 100. Please try again. ";
        cin >> percentIn;
        }

    //Calculate value of entered percent and display.
    percentOutput = percentIn * randomValue / 100;
    cout << "\n" << percentIn << "% of your random number is " << percentOutput;


    return 0;
}
