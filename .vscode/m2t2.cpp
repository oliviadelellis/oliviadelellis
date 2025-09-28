/*
CSC 134
M2T2 - Receipt Calculator
Olivia DeLellis
9/28/2025
*/

#include <iostream>
#include <iomanip> // for 2 decimal places trick 
using namespace std; 

int main() {
    // Purpose - Create a simple receipt 
    // should also handle sales tax (8%)

    // Declare our variables 
    string item = "🥟 Dumpling";
    double item_price = 7.99; 
    double tax_percent = 0.08; // 8% is 8/100
    double tax_amount;         // tax in $
    double total;              // price + tax

    // Greet user and take the order 
    cout << "Welcome to our CSC 134 Dumpling Restaurant" << endl;
    cout << "You ordered one " << item << "." << endl; 

    // Calculate the meal price 
    // Calculate the sales tax and the total price 
    tax_amount = item_price * tax_percent; // take 8% of the item 
    total = item_price + tax_amount; 

   

    // Print the receipt
    cout << setprecision(2) << fixed; 
    cout << total << endl;

    return 0; // no errors 
}