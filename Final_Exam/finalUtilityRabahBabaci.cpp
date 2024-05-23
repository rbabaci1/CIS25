/**
 * Program Name: finalUtilityRabahBabaci.cpp 
 * Discussion:   Update ALL FUNCTIONS, local variable names, and 
 *               filenames as required or needed.
 * Written By:   Rabah Babaci
 * Date:         2024/05/23
 */

// Include/Header Files
#include <iostream>
#include "fractionRabahBabaci.h"
#include "fractionUtilityRabahBabaci.h"
#include "finalUtilityRabahBabaci.h"
using namespace std;

// Function Definitions

void displayCodingStatementRB() {

    // Add required/necessary code!
}

void displayClassInfoRB() {

    // Add requried/necessary code!
}

void initSubMenuRB(TdFractionPtrRB& ptrRef) {
    int optionRB;

    cout << "\n  While initSubMenuRB() is running -" << endl;
    do {
        cout <<
            "\n  ******************************"
            "\n  * initSubMenu - One Fraction *"
            "\n  * 1. Creating                *"
            "\n  * 2. Updating                *"
            "\n  * 3. Returning               *"
            "\n  ******************************"
            "\n  Select an option (integer only): ";
        cin >> optionRB;

        switch (optionRB) {
        case 1:
            if (ptrRef) {
                cout << "\n  Please update or return!" 
                    << endl;
            } else {
                cout << "\n  Creating 1 NEW Fraction object -- "
                    "\n\n  Calling createFractionRB()!" << endl;

                createFractionRB(ptrRef);
            }

            break;
        case 2:
            if (ptrRef) {
                cout << "\n  Updating an EXISTING Fraction object -"
                    "\n\n  Calling updateFractionRB()!" << endl;

                updateFractionRB(ptrRef);
            } else {
                cout << "\n  Please create or return!" 
                    << endl;
            }

            break;
        case 3:
            cout << "\n  Returning to previous menu ..." << endl;

            break;
        default:
            cout << "\nWRONG OPTION!" << endl;
        }
    } while (optionRB != 3);
}

void runMenuFinalRB() {
    TdFractionPtrRB frPtr{ nullptr };
    int optionRB;

    do {
        cout <<
            "\n***************************************************"
            "\n*            MENU - Final Exam Even NN            *"
            "\n*  1. Setting Up Fraction through initSubMenuRB() *"
            "\n*  2. Calling displayPalindromeInfoRB()           *"
            "\n*  3. Printing Current Fraction                   *"
            "\n*  4. Quit                                        *"
            "\n***************************************************"

            "\nSelect an option (use integer value only): ";
        cin >> optionRB;

        switch (optionRB) {
        case 1:
            cout << "\nINITIALIZING by calling initSubMenuRB()!"
                "\n\nCalling initSubMenuRB() -" << endl;

            initSubMenuRB(frPtr);

            break;
        case 2:
            if (frPtr) {
                cout << "\nCalling displayPalindromeInfoRB()!"
                    << endl;

                // TODO -
                //   Add/Update the code below as required.
                displayPalindromeInfoRB(*frPtr);
            } else {
                cout << "\nNo Fraction ..." << endl;
            }
            
            
            break;
        case 3:
            if (frPtr) {
                cout << "\nPRINTING by calling member function "
                    "displayB()!" << endl;

                // TODO -
                //   Add/Update the code right below as required.
                frPtr->displayB();
            } else {
                cout << "\nNo Fraction ..." << endl;
            }
            
            break;
        case 4: 
            
            // TODO -
            //   Add/Update the code right below as required.

            delete frPtr;
            frPtr = nullptr;
            cout << "\nHave a great SUMMER!" << endl;
            
            break;
        default:
            cout << "\nWrong Option!" << endl;
        }

    } while (optionRB != 4);
}

// NO ADDTIONAL FUNCTIONS ALLOWED HERE