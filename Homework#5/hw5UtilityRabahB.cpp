/**
* Program Name: hw5UtilityRabahB.cpp
* Discussion: File #6 -
* Implementation File
* Utility
* Written By: Rabah Babaci
* Date: 2024/05/22
*/

// Include/Header File(s)
#include <iostream>
#include "fractionRabahB.h"
#include "fractionUtilityRabahB.h"
#include "hw5UtilityRabahB.h"
using namespace std;

// Function Definitions
void displayCodingStatementRB() {
    cout << "We write code to manipulate data (which are\n"
            "provided by the user) to produce the\n"
            "required outcome in the most efficient way!\n" << endl;
}

void displayClassInfoHw5RB() {
    cout << "CIS 25 - C++ Programming\n"
            "Laney College\n"
            "Rabah Babaci\n\n"
            "Information --\n"
            "  Assignment:               HW #5\n"
            "  Implemented by:           Rabah Babaci\n"
            "  Required Submission Date: 2024/05/24\n"
            "  Actual Submission Date:   2024/05/21\n" << endl;
}

void runMenuHw5RB() {
    FractionRabahB* frPtr{ nullptr };
    int optionRB;

    do {
        cout << "***************************************************\n"
                "*                   MENU - HW #5                  *\n"
                "*  1. Setting Up Fraction through initSubMenuRB() *\n"
                "*  2. Calling isPalindromeRB()                    *\n"
                "*  3. Calling displayCommonPalindromeDigitRB()    *\n"
                "*  4. Printing Current Fraction                   *\n"
                "*  5. Quit                                        *\n"
                "***************************************************" << endl;
        cout << "Select an option (use integer value only): ";
        cin >> optionRB;

        switch (optionRB) {
            case 1:
                cout << "\nINITIALIZING Option -\n\n"
                        "Calling initSubMenuRB() -\n" << endl;
                initSubMenuRB(frPtr);

                break;
            case 2:
                cout << "\nUsing isPalindromeRB() Option -\n\n";

                if (frPtr == nullptr) {
                    cout << "  Not a proper option as there is no Fraction!\n" << endl;
                } else if (isPalindromeRB(frPtr)) {
                    cout << "  The current Fraction is a Palindrome!\n" << endl;
                } else {
                    cout << "  The current Fraction is not a Palindrome!\n" << endl;
                }

                break;
            case 3:
                cout << "\nCalling displayCommonPalindromeDigitRB() Option -\n" << endl;

                if (frPtr == nullptr) {
                    cout << "Not a proper option as there is no Fraction!" << endl;
                } else if (isPalindromeRB(frPtr)) {
                    displayCommonPalindromeDigitRB(frPtr);   
                } else {
                    cout << "\n  The current Fraction is not a Palindrome!\n" << endl;
                }

                break;
            case 4:
                if(frPtr == nullptr) {
                    cout << "Not a proper option as there is no Fraction!" << endl;
                } else {
                    cout << "\nPRINTING Option -\n" << endl;
                    frPtr->display();
                }

                break;
            case 5:
                cout << "\nThe fraction is at" << endl;
                frPtr->display();
                cout << "Calling ~FractionRabahB()\n" << endl;

                break;
            default:
                cout << "\nWRONG OPTION!\n" << endl;

                break;
        }
    } while (optionRB != 5);

    delete frPtr;
    frPtr = nullptr;
}

void initSubMenuRB(FractionRabahB*& ptrRef) {
    int optionRB;

    do {
        cout << "  ******************************\n"
                "  * initSubMenu - One Fraction *\n"
                "  *  1. Creating               *\n"
                "  *  2. Updating               *\n"
                "  *  3. Returning              *\n"
                "  ******************************" << endl;
        cout << "  Select an option (integer only): ";
        cin >> optionRB;

        switch (optionRB) {
            case 1:
                if (ptrRef == nullptr) {
                    cout << "\n  Creating 1 NEW Fraction object --\n"
                            "\n  Calling createFractionRB()!\n" << endl;
                    createFractionRB(ptrRef);
                } else {
                    cout << "\n  Please update or return!\n" << endl;
                }

                break;
            case 2:
                if (ptrRef == nullptr) {
                    cout << "\n  Not a proper option as there is no Fraction!\n" << endl;
                } else {
                    cout << "\n  Updating an EXISTING Fraction object -\n"
                            "\n  Calling updateFractionRB()!\n" << endl;
                    updateFractionRB(ptrRef);
                }

                break;
            case 3:
                cout << "\n  Returning to previous menu!\n" << endl;

                break;
            default:
                cout << "\n  WRONG OPTION!\n" << endl;

                break;
        }
    } while (optionRB != 3);
}