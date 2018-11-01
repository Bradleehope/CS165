/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: setDollars(int d)
{
   dollars = d;
   if(dollars < 0)
   {
      dollars = (dollars * -1);
   }
   else
      dollars = dollars;
}

void Money :: setCents(int c)
{
   cents = c;
   if(cents < 0)
   {
      cents = (cents * -1);
   }
   else 
      cents = cents;
}

int Money :: getDollars() const
{
   return dollars;
}

int Money :: getCents() const
{
   return cents;
}

void Money :: display() const 
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}


