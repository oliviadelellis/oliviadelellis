/*
CSC 134
M5HW
Olivia DeLellis
Nov 13, 2025
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {
string month1, month2, month3;
double rain1, rain2, rain3;

//Question 1: Avergae rainfall for three months 
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


double average = (rain1 + rain2 + rain3) / 3.0;


cout << fixed << setprecision(2);
cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3
<< " is " << average << " inches." << endl;

}
//Question 2: Volume of a block

    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    while (width <= 0) {
        cout << "Width must be greater than zero. Try again: ";
        cin >> width;
    }
    cout << "Enter length: ";
    cin >> length;
    while (length <=0) {
        cout << "Length must be greater than zero. Try again: ";
        cin >> length;  
    }
    cout << "Enter height: ";
    cin >> height;
    while (height <= 0) {
        cout << "Height must be greater than zero. Try again: ";
        cin >> height;
    }
    double volume = width * length * height;
    cout << "The volume is " << volume << endl;

}



