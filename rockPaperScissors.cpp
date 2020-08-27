// rockpaperscissors.cpp
// Tom Bielawski
// 2/14/2020
// Rock Paper Scissor Game Against the Computer

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// function prototypes

// convert a numeric choice to the corresponding string,
// e.g. NUM_ROCK returns STR_ROCK
string choiceNumToString(int choice_num);
// get a random value between 1 and 3 (LIMIT) for the computer's choice
int getComputerChoice();
// return true if ch is valid choice of NUM_ROCK, NUM_PAPER, or NUM_SCISSORS
bool isValid(int ch);
// get, validate, and return the human user's choice
int getChoice();
// determine the winner - returns PLAYER_X or PLAYER_TIE
int determineWinner(int choice1, int choice2);

// global constants!
const int RAND_LIMIT = 3;
const int NUM_ERROR = 0;
const int NUM_ROCK = 1;
const int NUM_PAPER = 2;
const int NUM_SCISSORS = 3;

const string STR_ERROR = "error";
const string STR_ROCK = "rock";
const string STR_PAPER = "paper";
const string STR_SCISSORS = "scissors";

const int PLAYER_TIE = 0;
const int PLAYER_1 = 1;
const int PLAYER_2 = 2;

int main()
{
    unsigned seed = time(0);
    string inputStr; // general purpose string for input
    bool continuing = false;
    int player1_choice = 0, player2_choice = 0;
    int winner = 0;

    // seed the random number generator
    srand(seed);

    // main loop - ask the user if they want to play
    // and continue if confirmed
    do
    {
        cout << "Rock, Paper Scissors: play? (y or n): ";
        cin >> inputStr;
        if (inputStr != "y")
            continuing = false;
        else
        {
            continuing = true;
            cout << "OK, let's play!" << endl;

            // player 1 by default is the computer, we may want
            // want to enhance in the future to allow two humans
            // (or two computers!)
            player1_choice = getComputerChoice();
			//I commented out "Player 1 chooses" because it disrupts the game flow
			//and gives away choice prematurely. Game flows much better now.
            //cout << "Player 1 chooses " << player1_choice << endl;
            player2_choice = getChoice();
			//I commented out "Player 2 chooses" for the same reason.
            //cout << "Player 2 chooses " << player2_choice << endl;

            // echo choice and determine winner
            cout << "Computer chose " << choiceNumToString(player1_choice) <<
                  ", you chose " << choiceNumToString(player2_choice) << endl;
            winner = determineWinner(player1_choice, player2_choice);

            // show winner
            if (winner == PLAYER_1)
                cout << "Computer wins!" << endl;
            else if (winner == PLAYER_2)
                cout << "You win!" << endl;
            else
                cout << "Tie game!" << endl;
        }

    } while(continuing == true);

    cout << "Bye!" << endl;
    return 0;
}

//This function takes the user's numerical entry and returns the
//Equivalent string term.
string choiceNumToString(int choice_num)
{
    if(choice_num == 1)
    {
        return STR_ROCK;
    }
    else if (choice_num == 2)
    {
        return STR_PAPER;
    }
    else if (choice_num == 3)
    {
        return STR_SCISSORS;
    }
    else
    {
        return STR_ERROR;
    }
}

//This function gets the computer's chioce, determined by
//Pseudo-random number generator
int getComputerChoice()
{
  	int max = 3, min = 1;
	int randomNumber = rand() % max + min;
	return randomNumber;
}

//The isValid function to validate user input is one of
//the three acceptible choices.
bool isValid(int ch)
{
    bool validChoice;
	while (ch == NUM_ROCK || ch == NUM_PAPER || ch == NUM_SCISSORS)
    {
        validChoice = true;
		return validChoice;
	}
}

//Function to get the user's choice, and validate it with isValid()
int getChoice()
{
    int ch;
    cout << "Please enter your choice. \n" << endl;
	cout << "===>1 for Rock" << endl;
    cout << "===>2 for Paper" << endl;
    cout << "===>3 for Scissors" << endl;
    cin >> ch;


    //Calls isValid() to validate user input. If false, error message displayed,
    //User is prompted to try again.
    while (isValid(ch) == 0)
    {
        cout << "Invalid choice. Try again." << endl;
        cout << "Please enter your choice. \n" << endl;
        cout << "===>1 for Rock" << endl;
        cout << "===>2 for Paper" << endl;
        cout << "===>3 for Scissors" << endl;
        cin >> ch;
    }
    return ch;
}

//Function to determine the winner of each match
int determineWinner(int choice1, int choice2)
{
    if (choice1 == NUM_ROCK && choice2 == NUM_ROCK)
    {
        return PLAYER_TIE;
    }
    else if (choice1 == NUM_PAPER && choice2 == NUM_PAPER)
    {
        return PLAYER_TIE;
    }
    else if (choice1 == NUM_SCISSORS && choice2 == NUM_SCISSORS)
    {
        return PLAYER_TIE;
    }
     else if (choice1 == NUM_ROCK && choice2 == NUM_PAPER)
    {
        return PLAYER_2;
    }
    else if (choice1 == NUM_SCISSORS && choice2 == NUM_ROCK)
    {
        return PLAYER_2;
    }
    else if (choice1 == NUM_PAPER && choice2 == NUM_SCISSORS)
    {
        return PLAYER_2;
    }

    else if (choice1 == NUM_ROCK && choice2 == NUM_SCISSORS)
    {
        return PLAYER_1;
    }
    else if (choice1 == NUM_PAPER && choice2 == NUM_ROCK)
    {
        return PLAYER_1;
    }
    else if (choice1 == NUM_SCISSORS && choice2 == NUM_PAPER)
    {
        return PLAYER_1;
    }
}
