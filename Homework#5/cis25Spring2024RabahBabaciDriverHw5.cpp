/**
 * Program Name: cis25Spring2023RabahBabaciDriverHw5.cpp
 * Discussion: File #7 -
 * Application Driver
 * Written By: Rabah Babaci
 * Date: 2024/05/22
 */

// Include/Header File(s)
#include <iostream>
#include "fractionRabahB.h"
#include "fractionUtilityRabahB.h"
#include "hw5UtilityRabahB.h"
using namespace std;

// Application Driver
int main() {

    displayCodingStatementRB();
  
    displayClassInfoHw5RB();
  
    runMenuHw5RB();
  
    return 0;
}

/** PROGRAM OUTPUT
We write code to manipulate data (which are
provided by the user) to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Rabah Babaci

Information --
  Assignment:               HW #5
  Implemented by:           Rabah Babaci
  Required Submission Date: 2024/05/24
  Actual Submission Date:   2024/05/22

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 6

WRONG OPTION!

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Using isPalindromeRB() Option -

  Not a proper option as there is no Fraction!

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 1

INITIALIZING Option -

Calling initSubMenuRB() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Not a proper option as there is no Fraction!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 5

  WRONG OPTION!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 1

  Creating 1 NEW Fraction object --

  Calling createFractionRB()!

    Enter num: 5
    Enter denom: -959

    One Fraction of
      Address : 0x147e05ef0
        num : -5
        denom : 959
    has just been created/built!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 1

  Please update or return!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 4

PRINTING Option -

  Address : 0x147e05ef0
    num : -5
    denom : 959

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Using isPalindromeRB() Option -

  The current Fraction is a Palindrome!

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 3

Calling displayCommonPalindromeDigitRB() Option -

  There is/are 1 common digit(s) of
    5

  The largest common Palindrome digit: 5

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 1

INITIALIZING Option -

Calling initSubMenuRB() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 1

  Please update or return!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Updating an EXISTING Fraction object -

  Calling updateFractionRB()!

    Enter num: 156810000
    Enter denom: 49914173

    The Fraction object at 0x147e05ef0 has been updated as
      num : 156810000
      denom : 49914173

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 4

PRINTING Option -

  Address : 0x147e05ef0
    num : 156810000
    denom : 49914173

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Using isPalindromeRB() Option -

  The current Fraction is not a Palindrome!

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 3

Calling displayCommonPalindromeDigitRB() Option -


  The current Fraction is not a Palindrome!

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 1

INITIALIZING Option -

Calling initSubMenuRB() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 1

  Please update or return!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Updating an EXISTING Fraction object -

  Calling updateFractionRB()!

    Enter num: 1551
    Enter denom: 5491945

    The Fraction object at 0x147e05ef0 has been updated as
      num : 1551
      denom : 5491945

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 4

PRINTING Option -

  Address : 0x147e05ef0
    num : 1551
    denom : 5491945

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Using isPalindromeRB() Option -

  The current Fraction is a Palindrome!

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 3

Calling displayCommonPalindromeDigitRB() Option -

  There is/are 2 common digit(s) of
    1
    5

  The largest common Palindrome digit: 5

***************************************************
*                   MENU - HW #5                  *
*  1. Setting Up Fraction through initSubMenuRB() *
*  2. Calling isPalindromeRB()                    *
*  3. Calling displayCommonPalindromeDigitRB()    *
*  4. Printing Current Fraction                   *
*  5. Quit                                        *
***************************************************
Select an option (use integer value only): 5

The fraction is at
  Address : 0x147e05ef0
    num : 1551
    denom : 5491945

Calling ~FractionRabahB()

The Fraction is now removed!

Having fun ...!
*/

/** Logic_Code_Output_Issues
  None!
*/