/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

Money :: Money()
{
   this->dollars = 0;
   this->cents = 0;
}

Money:: Money(int dollars)
{
   setDollars(dollars);
   this->dollars = getDollars();
   this->cents = 0;
}

Money :: Money(int dollars, int cents)
{
   setDollars(dollars);
   setCents(cents);
   this->dollars = getDollars();
   this->cents = getCents();
} 

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
void Money :: display() const 
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}

int Money :: getDollars() const
{
   return dollars;
}

int Money :: getCents() const 
{
   return cents;
}

void Money :: setDollars(int dollars)
{
   this->dollars = dollars;
   if(dollars < 0)
   {
      this->dollars = dollars*(-1);
   }
}

void Money :: setCents(int cents)
{
   this->cents = cents;
   if(cents < 0)
   {
      this->cents = cents*(-1);
   }
}
