/**
 * Program Name: fractionRabahBabaci.h
 * Discussion:   Header File / Specification File
 * 
 *               Reminders!
 *                 - DO NOT ADD any code or text,
 *                   member data, and member functions.
 *                 - Update names as required.
 * Written By:   Rabah Babaci
 * Date:         2024/05/23
 */

#ifndef FRACTIONRABAHBABACI_H
#define FRACTIONRABAHBABACI_H

// Include/Header Files
#include <iostream>
using namespace std;

class FractionRabahBabaci {
public:
    // Constructors
    FractionRabahBabaci();
    FractionRabahBabaci(int, int);
    FractionRabahBabaci(const FractionRabahBabaci&);

    // Destructor
    ~FractionRabahBabaci();

    // Member Functions
    int getNum(void) const;
    void setNum(int);

    int getDenom(void) const;
    void setDenom(int);

    void update(int, int);

    void displayA(void) const;
    void displayB(void) const;

    // NO ADDITIONAL MEMBER FUNCTIONS ALLOWED HERE!

private:
    int num;
    int denom;

    int gcdBF(int, int) const;
};

// typedef

typedef FractionRabahBabaci TdFractionRB;
typedef FractionRabahBabaci* TdFractionPtrRB;
typedef FractionRabahBabaci* TdFractionAddrRB;

// NO ADDITIONAL MEMBER FUNCTIONS ALLOWED HERE

#endif