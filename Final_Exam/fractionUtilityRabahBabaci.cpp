/**
 * Program Name: fractionUtilityRabahBabaci.cpp 
 * Discussion:   Add and/or update ALL FUNCTIONS, 
 *               FUNCTION NAMES, local variables, and filenames
 *               as required or necessary.
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

void displayPalindromeInfoRB(const TdFractionRB& ref) {

    cout << "\n  While displayPalindromeInfoRB() is running -"
        << endl;

    // TODO -- Your Code Here!
}

void createFractionRB(TdFractionPtrRB& ptrRefA) {
    int n;
    int d;

    cout << "\n    While createFractionRB()is running -"
         "\n\n    Enter num: ";
    cin >> n;

    // TODO - Add/Update code here to reject 0
    cout << "\n    Enter denom: "; 
    cin >> d;

    ptrRefA = new TdFractionRB{ n, d };

    // TODO - 
    //   Add/Update code here based on requirements:
    //     - Textual information
    //     - Format
}

void updateFractionRB(TdFractionPtrRB& ptrRef) {
    int n;
    int d;

    cout << "\n    While updateFractionRB()is running -"
        "\n\n    Enter num: ";
    cin >> n;

    // TODO - Add/Update code here to reject 0
    cout << "\n    Enter denom: "; 
    cin >> d;

    ptrRef->update(n, d);

    // TODO - 
    //   Add/Update code here based on requirements:
    //     - Textual information
    //     - Format
}

// Additional Function Definitions Here as needed!