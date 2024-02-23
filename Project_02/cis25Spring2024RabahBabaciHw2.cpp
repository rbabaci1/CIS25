/**
 * Program Name: cis25Spring2024RabahBabaciHw2.cpp
 * Discussion:   HW #2
 * Written By:   R. Babaci
 * Date:         2024/02/24
 */

// Include/Header Files
#include <iostream>
using namespace std;


// Function to check if a number is positive, negative, or zero
string checkSign(int number) {
    return (number > 0) ? "positive" : (number < 0) ? "negative" : "zero";
}

// Function to check if a number is even or odd
string checkParity(int number) {
    return (number % 2) ? "odd" : "even";
}

// Function to perform and display arithmetic
void performArithmeticAndDisplay(int num1, int num2) {
    cout << "(" << num1 << ") + (" << num2 << ") --> " << (num1 + num2) << "\n"
         << "(" << num1 << ") - (" << num2 << ") --> " << (num1 - num2) << "\n"
         << "(" << num1 << ") * (" << num2 << ") --> " << (num1 * num2) << "\n"
         << "(" << num1 << ") / (" << num2 << ") --> " << (num1 / num2) << "\n"
         << "(" << num1 << ") % (" << num2 << ") --> " << (num1 % num2) << endl;
}

void printHeader() {
    cout << "We write code to manipulate data (which are\n"
    "provided by the user) to produce the\n"
    "required outcome in the most efficient way!\n\n"

    "CIS 25 - C++ Programming\n"
    "Laney College\n"
    "Rabah Babaci\n\n"

    "Information --\n"
    "  Assignment:               HW #2\n"
    "  Implemented by:           Rabah Babaci\n"
    "  Required Submission Date: 2024/02/10\n"
    "  Actual Submission Date:   2024/02/09\n";
}

void processIntegers() {
    int num1;
    int num2;

    // Input for the first integer
    cout << "\nEnter an integer #1: ";
    cin >> num1;
    cout << "\n  " << num1 << " is " << checkSign(num1) << " and " << checkParity(num1) << "!" << endl;

    // Input for the second integer
    cout << "\nEnter an integer #2: ";
    cin >> num2;
    cout << "\n  " << num2 << " is " << checkSign(num2) << " and " << checkParity(num2) << "!\n" << endl;

    // Performing and displaying arithmetic operations
    performArithmeticAndDisplay(num1, num2);
}

// Application Driver
int main() {
    // This function will print the header
    printHeader();

    // This function will process integers
    processIntegers();
    processIntegers();
    processIntegers();

    return 0;
}


/** PROGRAM_OUTPUT
We write code to manipulate data (which are
provided by the user) to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Rabah Babaci

Information --
  Assignment:               HW #2
  Implemented by:           Rabah Babaci
  Required Submission Date: 2024/02/25
  Actual Submission Date:   2024/02/24

Enter an integer #1: 24
    
  24 is positive and even!

Enter an integer #2: 7

  7 is positive and odd!

(24) + (7) --> 31
(24) - (7) --> 17
(24) * (7) --> 168
(24) / (7) --> 3
(24) % (7) --> 3

Enter an integer #1: 12

  12 is positive and even!

Enter an integer #2: 365

  365 is positive and odd!

(12) + (365) --> 377
(12) - (365) --> -353
(12) * (365) --> 4380
(12) / (365) --> 0
(12) % (365) --> 12

Enter an integer #1: 12

  12 is positive and even!

Enter an integer #2: -365

  -365 is negative and odd!

(12) + (-365) --> -353
(12) - (-365) --> 377
(12) * (-365) --> -4380
(12) / (-365) --> 0
(12) % (-365) --> 12
*/


/** Logic_Code_Output_Issues
None
*/ 