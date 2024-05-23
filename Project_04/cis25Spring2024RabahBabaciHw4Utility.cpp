#include "cis25Spring2024RabahBabaciHw4Utility.h"
#include <iostream>
using namespace std;

void displayCodingStatementRB() {
  cout << "We write code to manipulate data (which are\n"
          "provided by the user) to produce the\n"
          "required outcome in the most efficient way!\n" << endl;
}

void displayClassInfoRB() {
  cout << "CIS 25 - C++ Programming\n"
          "Laney College\n"
          "Rabah Babaci\n\n"
          "Information --\n"
          "  Assignment:               HW #4\n"
          "  Implemented by:           Rabah Babaci\n"
          "  Required Submission Date: 2024/05/18\n"
          "  Actual Submission Date:   2024/05/08\n" << endl;
}

void runMenuHw4RB() {
    int* numsArrayRB { nullptr };
    int sizeRB;
    int optionRB;

    do {
        cout << "**********************************************\n"
                "*           MENU - HW #4                     *\n"
                "* (1) Calling displayPalindromeDigitInfoRB() *\n"
                "* (2) Quit                                   *\n"
                "**********************************************\n"
                "Enter an integer for option + ENTER: ";
        cin >> optionRB;

        switch (optionRB) {
        case 1:
            cout << "\nHow many integers? ";
            cin >> sizeRB;

            numsArrayRB = new int[sizeRB];

            cout << "\n";
            for (int i = 0; i < sizeRB; i++) {
              cout << "Enter integer #" << i + 1 << ": ";
              cin >> *(numsArrayRB + i);
            }

            cout << "\nCalling displayPalindromeDigitInfoRB() with arguments" << endl;
            displayPalindromeDigitInfoRB(numsArrayRB, sizeRB);

            delete[] numsArrayRB;
            numsArrayRB = nullptr;

            break;
        case 2:
            cout << "\nHave Fun!" << endl;

            break;
        default:
            cout << "\nWrong Option!\n" << endl;
        }
    } while (optionRB != 2);

    // Ensure no memory is left allocated
    if (numsArrayRB != nullptr) {
        delete[] numsArrayRB;
    }
}

bool isPalindromeRB(int num) {
  int originalNumRB = num;
  int tempNumRB = num;
  int reversedNumRB = 0;
  int digitRB;

  while(tempNumRB) {
    digitRB = tempNumRB % 10;
    reversedNumRB = reversedNumRB * 10 + digitRB;
    tempNumRB /= 10;
  }

  // For negative numbers, compare the absolute values
  if (originalNumRB < 0) {
    originalNumRB = -originalNumRB;
    reversedNumRB = -reversedNumRB;
  }

  return originalNumRB == reversedNumRB;
}

void displayPalindromeDigitInfoRB(int* arr, int size) {
  int* tempPalindromesRB = new int[size];
  int digitOccurrencesRB[10][10] = { 0 };
  int digitCountRB[10] = { 0 };
  int palindromesCountRB = 0;
  int uniqueEvenCountRB = 0;
  int uniqueOddCountRB = 0;
  int maxEvenCountRB = 0;
  int smallestEvenRB = 10;
  int maxOddCountRB = 0;
  int smallestOddRB = 10;
  int currPalindromeRB;
  int currPalindromeDigitRB;

  cout << "  - Address of an array of integers: " << arr << "\n"
          "  - Size of the array: " << size << "\n\n"
          "  While displayPalindromeDigitInfoRB() is running -\n" << endl;

  // Scan array for palindromes and gather digit statistics
  for (int i = 0; i < size; i++) {
    if (isPalindromeRB(arr[i])) {
      currPalindromeRB = arr[i] < 0 ? -arr[i] : arr[i];
      tempPalindromesRB[palindromesCountRB] = arr[i];

      while(currPalindromeRB) {
        currPalindromeDigitRB = currPalindromeRB % 10;
        digitCountRB[currPalindromeDigitRB]++;
        digitOccurrencesRB[palindromesCountRB][currPalindromeDigitRB]++;
        currPalindromeRB /= 10;
      }
      palindromesCountRB++;
    }
  }

  // Display palindromes and statistics
  if (palindromesCountRB) {
    cout << "  There is/are " << palindromesCountRB << " Palindrome number(s) of\n";
    for (int i = 0; i < palindromesCountRB; i++) {
      cout << "    " << tempPalindromesRB[i] << "\n";
    }

    cout << "\n  Only with Palindrome number(s) –\n\n";

    // Count unique even and odd digits and determine max occurrences
    for (int digit = 0; digit < 10; digit++) {
      if (digitCountRB[digit]) {
        (!(digit % 2 ) ? uniqueEvenCountRB : uniqueOddCountRB)++;

        if (!(digit % 2) && digitCountRB[digit] > maxEvenCountRB) {
          maxEvenCountRB = digitCountRB[digit];
          smallestEvenRB = digit;
        } else if (digit % 2 && digitCountRB[digit] > maxOddCountRB) {
          maxOddCountRB = digitCountRB[digit];
          smallestOddRB = digit;
        }
      }
    }

    // Display statistics for even digits
    if (uniqueEvenCountRB) {
      cout << "    There is/are " << uniqueEvenCountRB << " unique even digit(s) of\n";
      for (int digit = 0; digit < 10; digit++) {
        if (digitCountRB[digit] && !(digit % 2)) {
          cout << "      " << digit << " seen " << digitCountRB[digit] << " time(s)\n";
        }
      }

    cout << "\n    Conditioned on largest occurrence - \n"
            "      The smallest unique even digit is\n\n"
            "        " << smallestEvenRB << " seen " << maxEvenCountRB << " time(s) with\n";
    for (int i = 0; i < palindromesCountRB; i++) {
      if (digitOccurrencesRB[i][smallestEvenRB] > 0) {
        cout << "          " << digitOccurrencesRB[i][smallestEvenRB] << " time(s) in " << tempPalindromesRB[i] << "\n";
      }
    }
    } else {
      cout << "    There are no unique even digits!\n";
    }

    // Display statistics for odd digits
    if (uniqueOddCountRB) {
      cout << "\n    There is/are " << uniqueOddCountRB << " unique odd digit(s) of\n";
      for (int digit = 0; digit < 10; digit++) {
        if (digitCountRB[digit] > 0 && digit % 2) {
          cout << "      " << digit << " seen " << digitCountRB[digit] << " time(s)\n";
        }
      }

      cout << "\n    Conditioned on largest occurrence - \n"
              "      The smallest unique odd digit is\n\n"
              "        " << smallestOddRB << " seen " << maxOddCountRB << " time(s) with\n";
      for (int i = 0; i < palindromesCountRB; i++) {
        if (digitOccurrencesRB[i][smallestOddRB] > 0) {
          cout << "          " << digitOccurrencesRB[i][smallestOddRB] << " time(s) in " << tempPalindromesRB[i] << "\n";
        }
      }
    } else {
      cout << "\n    There are no unique odd digits!\n"; 
    }

    cout << "\n";
  } else {
    cout << "  There are no Palindrome numbers!\n\n";
  }

  delete[] tempPalindromesRB;
}