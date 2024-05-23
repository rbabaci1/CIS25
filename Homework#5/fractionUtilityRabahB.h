/**
 * Program Name: fractionUtilityRabahB.h
 * Discussion: File #3 -
 * Specification File
 * Utility
 * Written By: Rabah Babaci
 * Date: 2024/05/22
 */

#ifndef FRACTIONUTILITYRABAHB_H
#define FRACTIONUTILITYRABAHB_H

// Include/Header File(s)
#include <iostream>
#include "fractionRabahB.h"
using namespace std;

// Function Protyotypes
bool isPalindromeRB(const FractionRabahB*);
bool isPalindromeHelperRB(int num);
void displayCommonPalindromeDigitRB(const FractionRabahB*);
void createFractionRB(FractionRabahB*& frRef);
void updateFractionRB(FractionRabahB*& frRef);
void extractDigitsRB(int num, int digits[], int &count);

#endif