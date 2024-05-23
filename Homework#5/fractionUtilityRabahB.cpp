/**
 * Program Name: fractionUtilityRabahB.cpp
 * Discussion: File #6 -
 * Implementation File
 * Fraction Utility
 * Written By: Rabah Babaci
 * Date: 2024/05/22
 */

// Include/Header File(s) 
#include <iostream>
#include "fractionRabahB.h"
#include "fractionUtilityRabahB.h"
using namespace std;

bool isPalindromeHelperRB(int num) {
    int originalNumRB = num;
    int reversedNumRB = 0;
    int tempNumRB = num;

    while(tempNumRB) {
        reversedNumRB = reversedNumRB * 10 + tempNumRB % 10;
        tempNumRB /= 10;
    }

    // For negative numbers, compare the absolute values
    if (originalNumRB < 0) {
        originalNumRB = -originalNumRB;
        reversedNumRB = -reversedNumRB;
    }

    return originalNumRB == reversedNumRB;
}

// Function Definitions
bool isPalindromeRB(const FractionRabahB* ptrRef) {
    return ptrRef->isNumPalindrome() && ptrRef->isDenomPalindrome();
}

void extractDigitsRB(int num, int digits[], int &count) {
    count = 0;
    if (num < 0) {
        num = -num;
    }
    while (num != 0) {
        digits[count++] = num % 10;
        num /= 10;
    }
}

void displayCommonPalindromeDigitRB(const FractionRabahB* ptrRef) {
    int numDigitsRB[10];
    int denomDigitsRB[10];
    int commonDigitsRB[10];
    int numCountRB = 0;
    int denomCountRB = 0;
    int commonCountRB = 0;
    int largestPalindromeDigitRB;

    extractDigitsRB(ptrRef->getNum(), numDigitsRB, numCountRB);
    extractDigitsRB(ptrRef->getDenom(), denomDigitsRB, denomCountRB);

    for (int i = 0; i < numCountRB; ++i) {
        for (int j = 0; j < denomCountRB; ++j) {
            if (numDigitsRB[i] == denomDigitsRB[j]) {
                bool isDuplicate = false;
                for (int k = 0; k < commonCountRB; ++k) {
                    if (commonDigitsRB[k] == numDigitsRB[i]) {
                        isDuplicate = true;
                        break;
                    }
                }
                
                if (!isDuplicate) {
                    commonDigitsRB[commonCountRB++] = numDigitsRB[i];
                }
            }
        }
    }

    if (commonCountRB > 0) {
        cout << "  There is/are " << commonCountRB << " common digit(s) of" << endl;
        for (int i = 0; i < commonCountRB; ++i) {
            cout << "    " << commonDigitsRB[i] << endl;
        }

        largestPalindromeDigitRB = commonDigitsRB[0];
        for (int i = 1; i < commonCountRB; ++i) {
            if (commonDigitsRB[i] > largestPalindromeDigitRB) {
                largestPalindromeDigitRB = commonDigitsRB[i];
            }
        }
        cout << "\n  The largest common Palindrome digit: " << largestPalindromeDigitRB << "\n" << endl;
    } else {
        cout << "  No common Palindrome digits found." << endl;
    }
}

void createFractionRB(FractionRabahB*& ptrRef) {
    int n;
    int d;

    cout << "    Enter num: ";
    cin >> n;

    // Loop until a non-zero denominator is entered
    do {
        cout << "    Enter denom: ";
        cin >> d;
    } while (d == 0);

    ptrRef = new FractionRabahB{ n, d };

    cout << "\n    One Fraction of"
        "\n      Address : " << ptrRef <<
        "\n        num : " << ptrRef->getNum() <<
        "\n        denom : " << ptrRef->getDenom() << 
        "\n    has just been created/built!\n" << endl;
}

void updateFractionRB(FractionRabahB*& ptrRef) {
    int n;
    int d;

    cout << "    Enter num: ";
    cin >> n;

    do {
        cout << "    Enter denom: ";
        cin >> d;
    } while (d == 0);

    ptrRef->update(n, d);

    cout << "\n    The Fraction object at " << ptrRef << " has been updated as\n"
            "      num : " << ptrRef->getNum() << "\n"
            "      denom : " << ptrRef->getDenom() << "\n" << endl;
}