/**
 * Program Name: fractionRabahBabaci.cpp
 * Discussion:   Update as required or needed for ALL FUNCTIONS
 *               and filenames below. 
 * Written By:   Rabah Babaci
 * Date:         2024/05/23
 */

// Include/Header Files
#include <iostream>
#include "fractionRabahBabaci.h"
using namespace std;

// Member Function Definitions for class Fraction

FractionRabahBabaci::FractionRabahBabaci() : num{ 0 }, denom{ 1 } { 
}

FractionRabahBabaci::FractionRabahBabaci(int n, int d) :
    num{ n / gcdBF(n, d) }, denom{ d / gcdBF(n, d) } {
}

FractionRabahBabaci::FractionRabahBabaci(const TdFractionRB& ref) :
    num{ ref.num }, denom{ ref.denom } {
}

FractionRabahBabaci::~FractionRabahBabaci() {
    cout << "\n~FractionRabahBabaci() was called - "
        "running and finishing!" << endl;
}

int TdFractionRB::gcdBF(int arg1, int arg2) const {
    int gcd{ 1 };
    int sign = (arg2 < 0) ? -1 : 1;

    if (arg1 < 0) {
        arg1 = -arg1;
    }

    if (arg2 < 0) {
        arg2 = -arg2;
    }

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;

    return sign * gcd;
}

int TdFractionRB::getNum() const {
    return num;
}

void TdFractionRB::setNum(int n) {
    int factor{ gcdBF(n, denom) };

    num = n / factor;
    denom /= factor;
}

int TdFractionRB::getDenom() const {
    return denom;
}

void TdFractionRB::setDenom(int d) {
    int factor{ gcdBF(num, d) };

    num /= factor;
    denom = d / factor;
}

void TdFractionRB::update(int n, int d) {
    int factor{ gcdBF(n, d) };

    num = n / factor;
    denom = d / factor;
}

void TdFractionRB::displayA() const {

    // TODO -
    //   Add/Update the code below as required
    cout << num << " / " << denom << endl;
}

void TdFractionRB::displayB() const {

    // TODO -
    //   Add/Update the code below as required.
    cout << num << " / " << denom << endl;
}

// NO ADDTIONAL FUNCTIONS ALLOWED HERE

