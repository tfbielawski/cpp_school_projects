//Restaurant.cpp
//Tom Bielawski
//01.10.2020
//Calculates tax and tip on restaurant bill

#include <iostream>
using namespace std;

int main()
{
    //Declare variables, and performs calculations to determine
    //the tip amount, the sales tax amount, and the final amount with those items added in.
    float dinnerBill = 50.00;
    float salesTaxAmount = dinnerBill * 0.06;
    float subtotalWithTax = salesTaxAmount + dinnerBill;
    float tipAmount = 0.20 * subtotalWithTax;
    float totalWithTip = tipAmount + subtotalWithTax;


    //Output displays the calculations from above.
    cout << "The meal charge is $" << dinnerBill << "." << endl;
    cout << "The tax rate is 6%." << endl;
    cout << "The tip percentage is 20%." << endl;
    cout << "The total before tip is $" << subtotalWithTax << "." << endl;
    cout << "The total with tip is $" << totalWithTip << "." << endl;


    return 0;
}

