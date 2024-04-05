/**
 * Program Name: cis25Spring2024RabahBabaciHw3.cpp
 * Discussion:   HW #3
 * Written By:   R. Babaci
 * Date:         2024/04/04
 */

// Include/Header File(s)
#include <iostream>
using namespace std;

// Function Prototypes
void displayCodingStatementRB(void);
void displayClassInfoRB(void);
void displayNumberClassifications(int userInput);
int countDigitsRB(int userInput);
void displayEvenDigitCounts(int zero, int two, int four, int six, int eight);
void displayOddDigitCounts(int one, int three, int five, int seven, int nine);
void displayDigitInfoRB(int userInput);
void runMenuHw3RB(void);

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
    "  Required Submission Date: 2024/04/07\n"
    "  Actual Submission Date:   2024/04/04\n" << endl;
}

void displayNumberClassifications(int userInput) {
  if (userInput > 0 && !(userInput % 2)) {
    cout << "  " << userInput << " is positive and even!\n";
  } else if (userInput > 0 && userInput % 2) {
    cout << "  " << userInput << " is positive and odd!\n";
  } else if (userInput < 0 && !(userInput % 2)) {
    cout << "  " << userInput << " is negative and even!\n";
  } else if (userInput < 0 && userInput % 2) {
    cout << "  " << userInput << " is negative and odd!\n";
  } else {
    cout << "  " << userInput << " is even!\n\n";
    return;
  }
}


int countDigitsRB(int userInput) {
  int digitCountRB{ 0 };

  do {
    digitCountRB++;
    userInput /= 10;
  } while (userInput);

  return digitCountRB;
}

void displayEvenDigitCounts(int zero, int two, int four, int six, int eight) {
  if (zero) cout << "    0 seen " << zero << " time(s)" << endl;
  if (two) cout << "    2 seen " << two << " time(s)" << endl;
  if (four) cout << "    4 seen " << four << " time(s)" << endl;
  if (six) cout << "    6 seen " << six << " time(s)" << endl;
  if (eight) cout << "    8 seen " << eight << " time(s)" << endl;
}

void displayOddDigitCounts(int one, int three, int five, int seven, int nine) {
  if (one) cout << "    1 seen " << one << " time(s)" << endl;
  if (three) cout << "    3 seen " << three << " time(s)" << endl;
  if (five) cout << "    5 seen " << five << " time(s)" << endl;
  if (seven) cout << "    7 seen " << seven << " time(s)" << endl;
  if (nine) cout << "    9 seen " << nine << " time(s)" << endl;
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
            cout << "\nEnter an integer: ";
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

void displayDigitInfoRB(int userInput) {
  int userInputCopyRB{ (userInput < 0) ? -userInput : userInput };
  int totalDigitsCount = countDigitsRB(userInput);
  int uniqueEvenDigitCountRB{ 0 };
  int uniqueOddDigitCountRB{ 0 };

  int digitZeroCountRB{ 0 };
  int digitTwoCountRB{ 0 };
  int digitFourCountRB{ 0 };
  int digitSixCountRB{ 0 };
  int digitEightCountRB{ 0 };

  int digitOneCountRB{ 0 };
  int digitThreeCountRB{ 0 };
  int digitFiveCountRB{ 0 };
  int digitSevenCountRB{ 0 };
  int digitNineCountRB{ 0 };

  int smallestEvenWithLargestOccurrenceRB{ -1 };
  int smallestOddWithLargestOccurrenceRB{ -1 };
  int smallestEvenWithLargestOccurrenceCountRB{ 0 };
  int smallestOddWithLargestOccurrenceCountRB{ 0 };

  cout << "\n  While displayDigitInfoRB() is running –\n\n";
  displayNumberClassifications(userInput);
  cout << "  " << userInput << " has " << totalDigitsCount << " digit(s).\n\n";

  do {
    switch (userInputCopyRB  % 10) {
      case 0: digitZeroCountRB++; break;
      case 1: digitOneCountRB++; break;
      case 2: digitTwoCountRB++; break;
      case 3: digitThreeCountRB++; break;
      case 4: digitFourCountRB++; break;
      case 5: digitFiveCountRB++; break;
      case 6: digitSixCountRB++; break;
      case 7: digitSevenCountRB++; break;
      case 8: digitEightCountRB++; break;
      case 9: digitNineCountRB++; break;
    }

    userInputCopyRB  /= 10;
  } while (userInputCopyRB);

  // Count the number of unique even and odd digits
  if (digitZeroCountRB) uniqueEvenDigitCountRB++;
  if (digitOneCountRB) uniqueOddDigitCountRB++;
  if (digitTwoCountRB) uniqueEvenDigitCountRB++;
  if (digitThreeCountRB) uniqueOddDigitCountRB++;
  if (digitFourCountRB) uniqueEvenDigitCountRB++;
  if (digitFiveCountRB) uniqueOddDigitCountRB++;
  if (digitSixCountRB) uniqueEvenDigitCountRB++;
  if (digitSevenCountRB) uniqueOddDigitCountRB++;
  if (digitEightCountRB) uniqueEvenDigitCountRB++;
  if (digitNineCountRB) uniqueOddDigitCountRB++;

  // Find the smallest even and odd digits with the largest occurrence
  if (digitZeroCountRB > smallestEvenWithLargestOccurrenceCountRB) {
    smallestEvenWithLargestOccurrenceCountRB = digitZeroCountRB;
    smallestEvenWithLargestOccurrenceRB = 0;
  }
  if (digitOneCountRB > smallestOddWithLargestOccurrenceCountRB) {
    smallestOddWithLargestOccurrenceRB = 1;
    smallestOddWithLargestOccurrenceCountRB = digitOneCountRB;
  }
  if (digitTwoCountRB > smallestEvenWithLargestOccurrenceCountRB) {
    smallestEvenWithLargestOccurrenceCountRB = digitTwoCountRB;
    smallestEvenWithLargestOccurrenceRB = 2;
  }
  if (digitThreeCountRB > smallestOddWithLargestOccurrenceCountRB) {
    smallestOddWithLargestOccurrenceRB = 3;
    smallestOddWithLargestOccurrenceCountRB = digitThreeCountRB;
  }
  if (digitFourCountRB > smallestEvenWithLargestOccurrenceCountRB) {
    smallestEvenWithLargestOccurrenceCountRB = digitFourCountRB;
    smallestEvenWithLargestOccurrenceRB = 4;
  }
  if (digitFiveCountRB > smallestOddWithLargestOccurrenceCountRB) {
    smallestOddWithLargestOccurrenceRB = 5;
    smallestOddWithLargestOccurrenceCountRB = digitFiveCountRB;
  }
  if (digitSixCountRB > smallestEvenWithLargestOccurrenceCountRB) {
    smallestEvenWithLargestOccurrenceCountRB = digitSixCountRB;
    smallestEvenWithLargestOccurrenceRB = 6;
  }
  if (digitSevenCountRB > smallestOddWithLargestOccurrenceCountRB) {
    smallestOddWithLargestOccurrenceRB = 7;
    smallestOddWithLargestOccurrenceCountRB = digitSevenCountRB;
  }
  if (digitEightCountRB > smallestEvenWithLargestOccurrenceCountRB) {
    smallestEvenWithLargestOccurrenceCountRB = digitEightCountRB;
    smallestEvenWithLargestOccurrenceRB = 8;
  }
  if (digitNineCountRB > smallestOddWithLargestOccurrenceCountRB) {
    smallestOddWithLargestOccurrenceRB = 9;
    smallestOddWithLargestOccurrenceCountRB = digitNineCountRB;
  }

  cout << "  There is/are " << uniqueEvenDigitCountRB << " unique even digit(s) of\n";
  displayEvenDigitCounts(digitZeroCountRB, digitTwoCountRB, digitFourCountRB, digitSixCountRB, digitEightCountRB);

  cout << "\n  Conditioned on largest occurrence -\n"
          "    The smallest unique even digit is\n\n"
          "      " << smallestEvenWithLargestOccurrenceRB << " seen " << smallestEvenWithLargestOccurrenceCountRB << " time(s)\n\n";

  cout << "  There is/are " << uniqueOddDigitCountRB << " unique odd digit(s) of\n";
  displayOddDigitCounts(digitOneCountRB, digitThreeCountRB, digitFiveCountRB, digitSevenCountRB, digitNineCountRB);
  
  cout << "\n  Conditioned on largest occurrence -\n"
          "    The smallest unique odd digit is\n\n"
          "      " << smallestOddWithLargestOccurrenceRB << " seen " << smallestOddWithLargestOccurrenceCountRB << " time(s)\n\n";
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