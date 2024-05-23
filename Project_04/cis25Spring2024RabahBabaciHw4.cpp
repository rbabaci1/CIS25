/**
 * Program Name: cis25Spring2024RabahBabaciHw4.cpp
 * Discussion:   HW #4
 * Written By:   R. Babaci
 * Date:         2024/05/08
 */

// Include/Header File(s)
#include <iostream>
#include "cis25Spring2024RabahBabaciHw4Utility.h"
using namespace std;

// Application Driver
int main() {

  displayCodingStatementRB();

  displayClassInfoRB();

  runMenuHw4RB();

  return 0;
}

/** PROGRAM_OUTPUT
We write code to manipulate data (which are
provided by the user) to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Rabah Babaci

Information --
  Assignment:               HW #4
  Implemented by:           Rabah Babaci
  Required Submission Date: 2024/05/18
  Actual Submission Date:   2024/05/08

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: 6

Wrong Option!

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: -1

Wrong Option!

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: 1

How many integers? 1

Enter integer #1: -2928

Calling displayPalindromeDigitInfoRB() with arguments
  - Address of an array of integers: 0x132704080
  - Size of the array: 1

  While displayPalindromeDigitInfoRB() is running -

  There are no Palindrome numbers!

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: 1

How many integers? 2

Enter integer #1: -2928
Enter integer #2: 36

Calling displayPalindromeDigitInfoRB() with arguments
  - Address of an array of integers: 0x1327040a0
  - Size of the array: 2

  While displayPalindromeDigitInfoRB() is running -

  There are no Palindrome numbers!

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: 1

How many integers? 2

Enter integer #1: -292
Enter integer #2: -294257

Calling displayPalindromeDigitInfoRB() with arguments
  - Address of an array of integers: 0x133104080
  - Size of the array: 2

  While displayPalindromeDigitInfoRB() is running -

  There is/are 1 Palindrome number(s) of
    -292

  Only with Palindrome number(s) –

    There is/are 1 unique even digit(s) of
      2 seen 2 time(s)

    Conditioned on largest occurrence - 
      The smallest unique even digit is

        2 seen 2 time(s) with
          2 time(s) in -292

    There is/are 1 unique odd digit(s) of
      9 seen 1 time(s)

    Conditioned on largest occurrence - 
      The smallest unique odd digit is

        9 seen 1 time(s) with
          1 time(s) in -292

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: 1

How many integers? 3

Enter integer #1: -292
Enter integer #2: -294257
Enter integer #3: 7524257

Calling displayPalindromeDigitInfoRB() with arguments
  - Address of an array of integers: 0x1327040b0
  - Size of the array: 3

  While displayPalindromeDigitInfoRB() is running -

  There is/are 2 Palindrome number(s) of
    -292
    7524257

  Only with Palindrome number(s) –

    There is/are 2 unique even digit(s) of
      2 seen 4 time(s)
      4 seen 1 time(s)

    Conditioned on largest occurrence - 
      The smallest unique even digit is

        2 seen 4 time(s) with
          2 time(s) in -292
          2 time(s) in 7524257

    There is/are 3 unique odd digit(s) of
      5 seen 2 time(s)
      7 seen 2 time(s)
      9 seen 1 time(s)

    Conditioned on largest occurrence - 
      The smallest unique odd digit is

        5 seen 2 time(s) with
          2 time(s) in 7524257

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: 1

How many integers? 4

Enter integer #1: -23932
Enter integer #2: -294257
Enter integer #3: 7524257
Enter integer #4: 34643

Calling displayPalindromeDigitInfoRB() with arguments
  - Address of an array of integers: 0x133304080
  - Size of the array: 4

  While displayPalindromeDigitInfoRB() is running -

  There is/are 3 Palindrome number(s) of
    -23932
    7524257
    34643

  Only with Palindrome number(s) –

    There is/are 3 unique even digit(s) of
      2 seen 4 time(s)
      4 seen 3 time(s)
      6 seen 1 time(s)

    Conditioned on largest occurrence - 
      The smallest unique even digit is

        2 seen 4 time(s) with
          2 time(s) in -23932
          2 time(s) in 7524257

    There is/are 4 unique odd digit(s) of
      3 seen 4 time(s)
      5 seen 2 time(s)
      7 seen 2 time(s)
      9 seen 1 time(s)

    Conditioned on largest occurrence - 
      The smallest unique odd digit is

        3 seen 4 time(s) with
          2 time(s) in -23932
          2 time(s) in 34643

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: 1

How many integers? 2

Enter integer #1: -13931
Enter integer #2: -294257

Calling displayPalindromeDigitInfoRB() with arguments
  - Address of an array of integers: 0x1332040a0
  - Size of the array: 2

  While displayPalindromeDigitInfoRB() is running -

  There is/are 1 Palindrome number(s) of
    -13931

  Only with Palindrome number(s) –

    There are no unique even digits!

    There is/are 3 unique odd digit(s) of
      1 seen 2 time(s)
      3 seen 2 time(s)
      9 seen 1 time(s)

    Conditioned on largest occurrence - 
      The smallest unique odd digit is

        1 seen 2 time(s) with
          2 time(s) in -13931

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: 1

How many integers? 3  

Enter integer #1: -22
Enter integer #2: -242
Enter integer #3: 82028

Calling displayPalindromeDigitInfoRB() with arguments
  - Address of an array of integers: 0x1327040d0
  - Size of the array: 3

  While displayPalindromeDigitInfoRB() is running -

  There is/are 3 Palindrome number(s) of
    -22
    -242
    82028

  Only with Palindrome number(s) –

    There is/are 4 unique even digit(s) of
      0 seen 1 time(s)
      2 seen 6 time(s)
      4 seen 1 time(s)
      8 seen 2 time(s)

    Conditioned on largest occurrence - 
      The smallest unique even digit is

        2 seen 6 time(s) with
          2 time(s) in -22
          2 time(s) in -242
          2 time(s) in 82028

    There are no unique odd digits!

**********************************************
*           MENU - HW #4                     *
* (1) Calling displayPalindromeDigitInfoRB() *
* (2) Quit                                   *
**********************************************
Enter an integer for option + ENTER: 2

Have Fun!
*/

/** Logic_Code_Output_Issues
None
*/