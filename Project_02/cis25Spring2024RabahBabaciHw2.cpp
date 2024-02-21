/**
 * Program Name: cis25Spring2024RabahBabaciHw1.cpp
 * Discussion:   HW #1
 * Written By:   R. Babaci
 * Date:         2024/02/09
 */

// Include/Header Files
#include <iostream>
using namespace std;

// // Application Driver
// int main() {
    // cout << "We write code to manipulate data (which are provided by the user)\n"
    // "to produce the required outcome in the most efficient way!\n\n"

    // "CIS 25 - C++ Programming\n"
    // "Laney College\n"
    // "Rabah Babaci\n\n"

    // "Information --\n"
    // "  Assignment:               HW #1 Exercise #1\n"
    // "  Implemented by:           Rabah Babaci\n"
    // "  Required Submission Date: 2024/02/10\n"
    // "  Actual Submission Date:   2024/02/09\n\n";

//     // !!! Follow the rest of the steps of the homework

//     return 0;
// }

// Function to check if a number is positive, negative, or zero
string checkSign(int number) {
    if (number > 0) {
        return "positive";
    } else if (number < 0) {
        return "negative";
    } else {
        return "zero";
    }
}

// Function to check if a number is even or odd
string checkParity(int number) {
    if (number == 0) {
        // Technically, zero is even, but you might want special handling
        return "even (zero)";
    } else if (number % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}

int main() {
    int num1;
    int num2;

    cout << "We write code to manipulate data (which are provided by the user)\n"
    "to produce the required outcome in the most efficient way!\n\n"

    "CIS 25 - C++ Programming\n"
    "Laney College\n"
    "Rabah Babaci\n\n"

    "Information --\n"
    "  Assignment:               HW #1 Exercise #1\n"
    "  Implemented by:           Rabah Babaci\n"
    "  Required Submission Date: 2024/02/10\n"
    "  Actual Submission Date:   2024/02/09\n\n";

    // Input for the first integer
    cout << "Enter an integer #1: ";
    cin >> num1;
    cout << num1 << " is " << checkSign(num1) << " and " << checkParity(num1) << "!" << endl;

    // Input for the second integer
    cout << "Enter an integer #2: ";
    cin >> num2;
    cout << num2 << " is " << checkSign(num2) << " and " << checkParity(num2) << "!" << endl;

    // Performing and displaying arithmetic operations
    cout << "(" << num1 << ") + (" << num2 << ") --> " << (num1 + num2) << endl;
    cout << "(" << num1 << ") – (" << num2 << ") --> " << (num1 - num2) << endl;
    cout << "(" << num1 << ") * (" << num2 << ") --> " << (num1 * num2) << endl;

    // Division operation with check to prevent division by zero
    if (num2 != 0) {
        cout << "(" << num1 << ") / (" << num2 << ") --> " << (num1 / num2) << endl;
        cout << "(" << num1 << ") % (" << num2 << ") --> " << (num1 % num2) << endl;
    } else {
        cout << "Cannot perform division or modulo by zero." << endl;
    }

    cout << endl; // Adds an extra line for spacing

    // !!! repeat as shown in homework description

    return 0;
}


/** PROGRAM_OUTPUT

*/



/** Logic_Code_Output_Issues
None
*/ 