/**
 * Program Name: cis25Spring2024RabahBabaciHw2.cpp
 * Discussion:   HW #2
 * Written By:   R. Babaci
 * Date:         2024/02/24
 */


// Include/Header File(s)
#include <iostream>
using namespace std;

// Application Driver
int main() {
     int num1RB;
     int num2RB;

     // Print the header
     cout << "We write code to manipulate data (which are\n"
     "provided by the user) to produce the\n"
     "required outcome in the most efficient way!\n\n"

     "CIS 25 - C++ Programming\n"
     "Laney College\n"
     "Rabah Babaci\n\n"

     "Information --\n"
     "  Assignment:               HW #2\n"
     "  Implemented by:           Rabah Babaci\n"
     "  Required Submission Date: 2024/02/25\n"
     "  Actual Submission Date:   2024/02/24\n" << endl;

     // Operation #1: Input for the first integer
     cout << "\nEnter an integer #1: ";
     cin >> num1RB;
     cout << "\n  " << num1RB << " is " 
          << (num1RB > 0 ? "positive" : num1RB < 0 ? "negative" : "zero") << " and " 
          << (num1RB % 2 ? "odd" : "even") << "!" << endl;

     // Operation #1: Input for the second integer
     cout << "\nEnter an integer #2: ";
     cin >> num2RB;
     cout << "\n  " << num2RB << " is " 
          << (num2RB > 0 ? "positive" : num2RB < 0 ? "negative" : "zero") << " and " 
          << (num2RB % 2 ? "odd" : "even") << "!\n" << endl;

     // Operation #1: Performing and displaying arithmetic operations
     cout << "(" << num1RB << ") + (" << num2RB << ") --> " << (num1RB + num2RB) << "\n"
          << "(" << num1RB << ") - (" << num2RB << ") --> " << (num1RB - num2RB) << "\n"
          << "(" << num1RB << ") * (" << num2RB << ") --> " << (num1RB * num2RB) << "\n"
          << "(" << num1RB << ") / (" << num2RB << ") --> " << (num1RB / num2RB) << "\n"
          << "(" << num1RB << ") % (" << num2RB << ") --> " << (num1RB % num2RB) << endl;

     // Operation #2: Input for the first integer
     cout << "\nEnter an integer #1: ";
     cin >> num1RB;
     cout << "\n  " << num1RB << " is " 
          << (num1RB > 0 ? "positive" : num1RB < 0 ? "negative" : "zero") << " and " 
          << (num1RB % 2 ? "odd" : "even") << "!" << endl;

     // Operation #2: Input for the second integer
     cout << "\nEnter an integer #2: ";
     cin >> num2RB;
     cout << "\n  " << num2RB << " is " 
          << (num2RB > 0 ? "positive" : num2RB < 0 ? "negative" : "zero") << " and " 
          << (num2RB % 2 ? "odd" : "even") << "!\n" << endl;

     // Operation #2: Performing and displaying arithmetic operations
     cout << "(" << num1RB << ") + (" << num2RB << ") --> " << (num1RB + num2RB) << "\n"
          << "(" << num1RB << ") - (" << num2RB << ") --> " << (num1RB - num2RB) << "\n"
          << "(" << num1RB << ") * (" << num2RB << ") --> " << (num1RB * num2RB) << "\n"
          << "(" << num1RB << ") / (" << num2RB << ") --> " << (num1RB / num2RB) << "\n"
          << "(" << num1RB << ") % (" << num2RB << ") --> " << (num1RB % num2RB) << endl;

     // Operation #3: Input for the first integer
     cout << "\nEnter an integer #1: ";
     cin >> num1RB;
     cout << "\n  " << num1RB << " is " 
          << (num1RB > 0 ? "positive" : num1RB < 0 ? "negative" : "zero") << " and " 
          << (num1RB % 2 ? "odd" : "even") << "!" << endl;

     // Operation #3: Input for the second integer
     cout << "\nEnter an integer #2: ";
     cin >> num2RB;
     cout << "\n  " << num2RB << " is " 
          << (num2RB > 0 ? "positive" : num2RB < 0 ? "negative" : "zero") << " and " 
          << (num2RB % 2 ? "odd" : "even") << "!\n" << endl;

     // Operation #3: Performing and displaying arithmetic operations
     cout << "(" << num1RB << ") + (" << num2RB << ") --> " << (num1RB + num2RB) << "\n"
          << "(" << num1RB << ") - (" << num2RB << ") --> " << (num1RB - num2RB) << "\n"
          << "(" << num1RB << ") * (" << num2RB << ") --> " << (num1RB * num2RB) << "\n"
          << "(" << num1RB << ") / (" << num2RB << ") --> " << (num1RB / num2RB) << "\n"
          << "(" << num1RB << ") % (" << num2RB << ") --> " << (num1RB % num2RB) << endl;

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