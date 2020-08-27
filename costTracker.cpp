//Tom Bielawski
//8/16/2020
//C++ Beginner Projects www.codeboks.com
//Write a C++ program to check units sold and total the purchase

/* Software company sells a package that costs $99. Quantity discounts apply
 * 10-19 = 20%
 * 20-49 = 30%
 * 50-99 = 40%
 * 100 or more = 50%
 * Ask for number of units sold and compute total cost.*/

//Intentionally avoiding --using namespace std;--

#include <iostream>

int main()
{
    //Declare variables, initialize to 0.
    double productCost = 0;
    double itemQuantity = 0;
    std::string repName;

    //Create a header for running the program using \t and \n
    std::cout <<"\n\t----------------------------------------" << std::endl;
    std::cout <<"\t\t:Ace Software Purchase Calculator:" << std::endl;
    std::cout <<"\t----------------------------------------\n\n" << std::endl;

    //Greet the user and ask for input
    std::cout << "Welcome to the Ace Software Purchase Calculator." << std::endl;
    std::cout << "Please enter your name." << std::endl;

    //String variable to hold the user's name.
    std::cin >> repName;
    std::cout << "Hello " << repName << ". Thank you for using our software." <<std::endl;
    std::cout << "How many purchases do you have, " << repName <<"?" << std::endl;

    //Variable to hold user data
    std::cin >> itemQuantity;

    //If statement to determine total sales at regular price
    if(itemQuantity > 0 && itemQuantity < 10)
    {
        //Total equals the number of products times 99(because the product is $99)
        productCost = itemQuantity * 99;
        std::cout << "The total cost of purchases is: $" <<productCost << std::endl;
    }

    //Else-If statement to determine total sales at 20% discount
    else if(itemQuantity >= 10 && itemQuantity <= 19)
    {
        //Total equals the number of proudcts times 99, times .2 (20% discount)
        productCost = itemQuantity * 99 * .2;
        std::cout << "The total cost of purchases is: $" <<productCost << std::endl;
    }

    //If statement to determine total sales at 30% discount
    else if(itemQuantity >= 20 && itemQuantity <= 29)
    {
        //Total equals the number of proudcts times 99, times .3 (30% discount)
        productCost = itemQuantity * 99 * .3;
        std::cout << "The total cost of purchases is: $" <<productCost << std::endl;
    }

    //Else-If statement to determine total sales at 40% discount
    else if(itemQuantity >= 30 && itemQuantity <= 39)
    {
        //Total equals the number of proudcts times 99, times .4 (40% discount)
        productCost = itemQuantity * 99 * .4;
        std::cout << "The total cost of purchases is: $" <<productCost << std::endl;
    }

    //Else-If statement to determine total sales at 50% discount
    else if(itemQuantity >= 40 && itemQuantity <= 49)
    {
        //Total equals the number of proudcts times 99, times .5 (50% discount)
        productCost = itemQuantity * 99 * .5;
        std::cout << "The total cost of purchases is: $" <<productCost << std::endl;
    }

    //Else statement for invalid entry
    else
    {
        std::cout << "Your input is invalid. Please enter a value greater than 0." << std::endl;
    }

    //A nice message to end the program.
    std::cout << "Great work, " << repName << "! Ace Software Company values your service!" << std::endl;
}