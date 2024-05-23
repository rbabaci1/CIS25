/**
 * Program Name: fractionRabahB.h
 * Discussion: File #1 -
 * Specification File
 * for your FractionRabahB class
 * Written By: Rabah Babaci
 * Date: 2024/05/22
 */

#ifndef FRACTIONRABAHB_H
#define FRACTIONRABAHB_H

// Include/Header File(s)
#include <iostream>
using namespace std;

class FractionRabahB {
public:
    FractionRabahB();  // Default constructor
    FractionRabahB(const FractionRabahB&);  // Copy constructor
    FractionRabahB(int, int);  // Parameterized constructor

    ~FractionRabahB();  // Destructor

    int getNum(void) const;
    void setNum(int);

    int getDenom(void) const;
    void setDenom(int);

    void update(int, int);
    void display(void) const;

    bool isNumPalindrome(void) const;
    bool isDenomPalindrome(void) const;

private:
    int num;
    int denom;

    int gcd(int, int) const;
};

#endif