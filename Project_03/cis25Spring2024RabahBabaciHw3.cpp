/**
 * Program Name: cis25Spring2024RabahBabaciHw2.cpp
 * Discussion:   HW #3
 * Written By:   R. Babaci
 * Date:         2024/03/15
 */

// Include/Header File(s)
#include <iostream>
using namespace std;

// Function Prototypes
void displayCodingStatementRB(void);
void displayClassInfoRB(void);
void runMenuHw3RB(void);
void displayDigitInfoRB(int arg);

// Application Driver
int main() {

  displayCodingStatementRB();

  displayClassInfoRB();
  
  runMenuHw3RB();

  return 0;
}

// Function Definitions

void displayCodingStatementRB() {
  cout << "We write code to manipulate data (which are\n"
    "provided by the user) to produce the\n"
    "required outcome in the most efficient way!\n\n" << endl;
}

void displayClassInfoRB() {
  cout << "CIS 25 - C++ Programming\n"
    "Laney College\n"
    "Rabah Babaci\n\n"
    "Information --\n"
    "  Assignment:               HW #3\n"
    "  Implemented by:           Rabah Babaci\n"
    "  Required Submission Date: 2024/03/17\n"
    "  Actual Submission Date:   2024/02/15\n" << endl;
}

void runMenuHw3RB() {
    int optionRB;
    int userInputRB;

    do {
        cout << "************************************\n"
            "*           MENU – HW #3           *\n"
            "* (1) Calling displayDigitInfoRB() *\n"
            "* (2) Quit                         *\n"
            "************************************\n"
            "Enter an integer for option + ENTER: ";
        cin >> optionRB;

        switch (optionRB) {
        case 1:
            cout << "\nEnter an int: ";
            cin >> userInputRB;

            cout << "\nCalling displayDigitInfoRB() with an argument of\n  "
                << userInputRB << endl;

            displayDigitInfoRB(userInputRB);

            break;
        case 2:
            cout << "\nHave Fun!" << endl;

            break;
        default:
            cout << "\nWrong Option!\n" << endl;
        }
    } while (optionRB != 2);
}

void displayDigitInfoRB(int arg) {
  cout << "\n  While displayDigitInfoRB() is running –\n\n";

  // call a function
}


/** PROGRAM_OUTPUT
We write code to manipulate data (which are
provided by the user) to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Rabah Babaci

Information --
  Assignment:               HW #3
  Implemented by:           Rabah Babaci
  Required Submission Date: 2024/03/17
  Actual Submission Date:   2024/02/15

************************************
*           MENU – HW #3           *
* (1) Calling displayDigitInfoRB() *
* (2) Quit                         *
************************************
Enter an integer for option + ENTER: 6

Wrong Option!

************************************
*           MENU – HW #3           *
* (1) Calling displayDigitInfoRB() *
* (2) Quit                         *
************************************
Enter an integer for option + ENTER: -1

Wrong Option!

************************************
*           MENU – HW #3           *
* (1) Calling displayDigitInfoRB() *
* (2) Quit                         *
************************************
Enter an integer for option + ENTER: 1

Enter an integer: -29

Calling displayDigitInfoRB() with an argument of
  -29

  While displayDigitInfoRB() is running –

  -29 is negative and odd!
  -29 has 2 digit(s).

  There is/are 1 even digit(s) of
    2 seen 1 time(s)

  Conditioned on largest occurrence, the smallest even is
    2 seen 1 time(s)

  There is/are 1 odd digit(s) of
    9 seen 1 time(s)

  Conditioned on largest occurrence, the smallest odd is
    9 seen 1 time(s)

************************************
*           MENU – HW #3           *
* (1) Calling displayDigitInfoRB() *
* (2) Quit                         *
************************************
Enter an integer for option + ENTER: 1

Enter an integer: -294257

Calling displayDigitInfoRB() with an argument of
  -294257

  While displayDigitInfoRB() is running –

  -294257 is negative and odd!
  -294257 has 6 digit(s).

  There is/are 2 even digit(s) of
    2 seen 2 time(s)
    4 seen 1 time(s)

  Conditioned on largest occurrence, the smallest even is
    2 seen 2 time(s)

  There is/are 3 odd digit(s) of
    5 seen 1 time(s)
    7 seen 1 time(s)
    9 seen 1 time(s)

  Conditioned on largest occurrence, the smallest odd is
    5 seen 1 time(s)

************************************
*           MENU – HW #3           *
* (1) Calling displayDigitInfoRB() *
* (2) Quit                         *
************************************
Enter an integer for option + ENTER: 1

Enter an integer: 882944428

Calling displayDigitInfoRB() with an argument of
  882944428

  While displayDigitInfoRB() is running –

  882944428 is positive and even!
  882944428 has 9 digit(s).

  There is/are 6 even digit(s) of
    2 seen 2 time(s)
    4 seen 3 time(s)
    8 seen 3 time(s)

  Conditioned on largest occurrence, the smallest even is
    4 seen 3 time(s)

  There is/are 1 odd digit(s) of
    9 seen 1 time(s)

  Conditioned on largest occurrence, the smallest odd is
    9 seen 1 time(s)

************************************
*           MENU – HW #3           *
* (1) Calling displayDigitInfoRB() *
* (2) Quit                         *
************************************
Enter an integer for option + ENTER: 1

Enter an integer: 0

Calling displayDigitInfoRB() with an argument of
  0

  While displayDigitInfoRB() is running –

  0 is  even!

************************************
*           MENU – HW #3           *
* (1) Calling displayDigitInfoRB() *
* (2) Quit                         *
************************************
Enter an integer for option + ENTER: 2

Have fun!
*/

/** Logic_Code_Output_Issues
None
*/