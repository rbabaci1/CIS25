/**
 * Program Name: cis25Spring20240307.cpp 
 * Discussion:   Menu and HW #3
 * Written By:   Your Name
 * Date:         2024/03/07
 */

// Include/Header Files
#include <iostream>
using namespace std;

// Function Prototypes

void runMenuHw3(void);
void displayDigitInfo(int arg);
void displayDigitZero(void);

int extractDigitZeroCount(int arg);

void doSomething(int ary[10]);

void doSomething2(int[]);

void doSomething3(int[], int size);

// Application Driver

int main() {

    //runMenuHw3();

    displayDigitZero();

    return 0;
}

// Function Definitions

int extractDigitZeroCount(int arg) {
    int digitZeroCount{ 0 };

    do {
        if (arg % 10 == 0) {
            digitZeroCount++;
        }

        arg /= 10;
    } while (arg);

    return digitZeroCount;
}

void displayDigitZero() {
    int usrInput;
    int digitZeroCount{ 0 };

    cout << "\nEnter an int: ";
    cin >> usrInput;

    do {
        if (usrInput % 10 == 0) {
            digitZeroCount++;
        }

        usrInput /= 10;
    } while (usrInput);

    cout << "\nThere is/are " << digitZeroCount << " digit 0\n"
        << endl;
}

void runMenuHw3() {
    int option;
    int usrInput;

    do {
        cout << "\n****"
            "\n* HW #3 Menu"
            "\n* (1) Calling displayDigitInfo()"
            "\n* (2) Quitting"
            "\n****"
            "\nEnter an int for option: ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "\nCalling displayDigitInfo() ..." << endl;

            cout << "\nEnter an int: ";
            cin >> usrInput;

            displayDigitInfo(usrInput);

            break;
        case 2:
            cout << "\nQuitting!" << endl;

            break;
        default:
            cout << "\nWrong Option!" << endl;
        }
    } while (option != 2);
}

void displayDigitInfo(int arg) {
    int digitCount{ 0 };
    int digitZeroCount{ 0 };
    int digit2Count{ 0 };
    int digit4Count{ 0 };
    int digit6Count{ 0 };
    int digit8Count{ 0 };
    int tmp{ arg };
    int ary[10]{ 0 };

    int myData[10];

    const int CONST_VARIABLE{ 100 };

    int size{ 10 };
    //int intAry[size];

    const int SIZE{ 10 };
    int intAry2[SIZE];

    //CONST_VARIABLE = 100;

    //CONST_VARIABLE = CONST_VARIABLE;

    //myData = ary;

    myData[1];

    ary[0];
    ary[1];
    ary[2];
    ary[3];
    ary[4];
    ary[5];
    ary[6];
    ary[7];
    ary[8];
    ary[9];

    // TODO: 
    //   - Negative/Positive
    //   - Even/Odd

    // TODO:
    //   - Digit Count
    do {
        //arg /= 10; // update
        tmp /= 10;

        digitCount++; // body
    } while (tmp);

    cout << "\nThere is/are " << digitCount << " digit(s)!" << endl;

    // TODO:
    //   - Individual Digit Counts 
    //   - Ten (10) possible digits

    // TODO:
    //   - Individual Digit 0
    //   - Possible use of displayDigitZero()??? <-- NO

    digitZeroCount = extractDigitZeroCount(arg);

    digit2Count = extractDigit2Count(arg);
    digit4Count = extractDigit4Count(arg);
    digit6Count = extractDigit6Count(arg);
    digit8Count = extractDigit8Count(arg);

}

/**PROGRAM OUTPUT

*/

/**Logic_code_output Issues
None!
*/