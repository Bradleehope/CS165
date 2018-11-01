/*********************************************************************
 * File: check04b.cpp
 * Purpose: contains the main method to exercise the Date class.
 *********************************************************************/

#include "date.h"

#include <iostream>
using namespace std;

int main()
{
   // prompt for month, day, year
   
   // create a Date object
   Date date;   
   // set its values
   
   // call each display function
   date.set();
   std::cout << "\n";
   date.displayAmerican();
   date.displayEuropean();
   date.displayIOS();

   return 0;
}
