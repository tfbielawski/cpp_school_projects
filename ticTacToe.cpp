//Tom Bielawski
//C++ Beginner Projects cppforschool.com
//Write a C++ two-player tic tac toe game

#include <iostream>

//The std namespace removes the need to use std:: in a number of entries
using namespace std;

//Declare and initialize array to establish the game board
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

//Declare function prototypes
int checkwin();
void board();

//Main function
int main()
{
    //Initialize player
    int player = 1, i, choice;

    //Declare a char variable
    char mark;

    //Begin the game
    do
    {
        //Call the function that creates the board
        board();

        //Ternary conditional to determine player
        player = (player % 2) ? 1 : 2;

        //Greet player, ask for a box number, place a mark in that box.
        //Place X for player 1, O for player 2.
        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        //Ternary conditional - if mark is player 1, then player 1 is X. Otherwise player 1 is O
        mark = (player == 1) ? 'X' : 'O';

        //If statement determines where to place the player choice
        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;

        //Else statement for an invalid move
        else
        {
            cout << "Invalid move ";

            //Player tries again.
            player--;
            cin.ignore();
            cin.get();
        }
        //Calling the checkwin() function, determines winner
        i = checkwin();

        //Next turn.
        player++;
    }

    //While look to call the board function while the
    //game is still being played.
    while(i == -1);
    //Call board()
    board();
    //If statement informs the player who won.
    if(i == 1)
        cout << "==>\aCongratulations, Player "<< --player <<", you won!! :) ";
    else
        cout << "==>\aThe game is a draw. :( ";

    cin.ignore();
    cin.get();
    return 0;
}

/*********************************************
    This function determines who is the winner.
   **********************************************/

int checkwin()
//This function compares the values in the possible win
//positoions for tic tac toe: horizontal, diagonal, vertical.
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
             && square[4] != '4' && square[5] != '5' && square[6] != '6'
             && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}


/*******************************************************************
    This function presents a "board" on screen and places the players
    mark in the correct place. The board is recreated every turn.
********************************************************************/


void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}

/*******************************************************************
                The End
********************************************************************/
