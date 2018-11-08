/***************************************************************
 * File: ta04.cpp
 * Author: (your name here)
 * Purpose: Contains the main function to test the Rational class.
 ***************************************************************/

#include <iostream>
#include <string>
using namespace std;

#include "rational.h"

int main()
{
   // Declare your Rational object here
   rational rational1;    

   // Call your prompt function here
   rational1.prompt();

   // Call your display functions here
   rational1.display();
   rational1.displayDecimal();

   return 0;
}
