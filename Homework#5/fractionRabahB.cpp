/**
 * Program Name: fractionRabahB.cpp
 * Discussion: File #2 -
 * Implementation File
 * Written By: Rabah Babaci
 * Date: 2024/05/22
 */

// Include/Header File(s)
#include <iostream>
#include "fractionRabahB.h"
#include "fractionUtilityRabahB.h"
using namespace std;

// Default constructor
FractionRabahB::FractionRabahB() : num{ 0 }, denom{ 1 } {
    cout << "Default constructor called." << endl;
}

// Copy constructor
FractionRabahB::FractionRabahB(const FractionRabahB& ref) : num(ref.num), denom(ref.denom) {
    cout << "Copy constructor called." << endl;
}

// Parameterized constructor
FractionRabahB::FractionRabahB(int n, int d) : num{ n }, denom{ d } {
    // Calculate the greatest common divisor
    int divisor = gcd(num, denom);
    
    if (denom < 0) {
        num = -num;
        denom = -denom;
    }

    // Simplify the fraction
    num /= divisor;
    denom /= divisor;
}

// Destructor
FractionRabahB::~FractionRabahB() {
    cout << "The Fraction is now removed!\n\n"
            "Having fun ...!" << endl;
}

// Getter and Setter functions
int FractionRabahB::getNum() const {
    return num;
}

void FractionRabahB::setNum(int n) {
    num = n;
}

int FractionRabahB::getDenom() const {
    return denom;
}

void FractionRabahB::setDenom(int d) {
    denom = d;
}

void FractionRabahB::update(int n, int d) {
    int divisor = gcd(n, d);

    n /= divisor;
    d /= divisor;

    if (d < 0) {
        n = -n;
        d = -d;
    }

    num = n;
    denom = d;
}

void FractionRabahB::display() const {
    cout << "  Address : " << this <<
            "\n    num : " << num <<
            "\n    denom : " << denom << "\n" << endl;
}

bool FractionRabahB::isNumPalindrome() const {
    return isPalindromeHelperRB(num);
}

bool FractionRabahB::isDenomPalindrome() const {
    return isPalindromeHelperRB(denom);
}

int FractionRabahB::gcd(int arg1, int arg2) const {
    // Ensure both arguments are positive
    arg1 = (arg1 < 0) ? -arg1 : arg1;
    arg2 = (arg2 < 0) ? -arg2 : arg2;

    while (arg2) {
        int temp = arg2;
        arg2 = arg1 % arg2;
        arg1 = temp;
    }

    return arg1;
}