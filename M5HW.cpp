/*
CSC 134
M5HW
Olivia DeLellis
Nov 13, 2025
*/




#include <iostream>
#include <string>

void q5_distance() {
cout << "\n--- Question 5: Distance Traveled ---\n";
double speed;
int hours;
cout << "What is the speed of the vehicle in mph? ";
while (cin >> speed) || speed < 0.0) {
cout << "Do not accept negative speed. Enter speed (>= 0): ";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
cout << "How many hours has it traveled? ";
while (!(cin >> hours) || hours < 1) {
cout << "Time traveled must be at least 1 hour. Enter hours: ";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
cout << "\nHour\tDistance Traveled\n";
cout << "--------------------------------\n";
for (int h = 1; h <= hours; ++h) {
double dist = speed * h;
cout << setw(3) << h << "\t" << setw(6) << dist << "\n";
}
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


// Question 6: Menu-based program calling questions 1-5
int main() {
cout << "CSC 134 - M5HW1 - Questions 1 through 5 (Menu)" << endl;
bool running = true;
while (running) {
cout << "\nMain Menu:\n";
cout << "1 - Question 1: Average Rainfall\n";
cout << "2 - Question 2: Volume of a Block\n";
cout << "3 - Question 3: Roman Numeral (1-10)\n";
cout << "4 - Question 4: Geometry Calculator\n";
cout << "5 - Question 5: Distance Traveled\n";
cout << "6 - Quit\n";
cout << "Enter your choice (1-6): ";


int choice;
if (!(cin >> choice)) {
cout << "Invalid input. Enter a number between 1 and 6.\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
continue;
}
cin.ignore(numeric_limits<streamsize>::max(), '\n');


switch (choice) {
case 1: q1_rainfall(); break;
case 2: q2_volume(); break;
case 3: q3_roman(); break;
case 4: q4_geometry(); break;
case 5: q5_distance(); break;
case 6: running = false; cout << "Exiting program. Goodbye!\n"; break;
default:
cout << "Invalid choice. The valid choices are 1 through 6.\n";
break;
}
}


return 0;
}