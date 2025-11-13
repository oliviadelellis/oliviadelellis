/*
CSC 134
Olivia DeLellis
M5HW
Nov 13, 2025
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes 
int main() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    double avg = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " 
         << month1 << ", " << month2 << ", and " << month3
         << " is " << avg << " inches.\n";

    return 0;
 }
// Function for Question 2
 void question2() {
    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: No side can be zero or less.\n\n";
        return;
    }

    double volume = width * length * height;
    cout << "Volume of the block: " << volume << endl << endl;
}

// Function for Question 3
void question3() {

    int num;
    cout << "Enter a number (1 - 10): ";
    cin >> num;

    if (num < 1 || num > 10) {
        cout << "Invalid input. Number must be 1 through 10.\n\n";
        return;
    }

    cout << "The Roman numeral version of " << num << " is ";

    switch(num) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }

    cout << ".\n\n";