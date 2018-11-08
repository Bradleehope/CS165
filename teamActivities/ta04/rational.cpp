
/***************************************************************
 * File: rational.cpp
 * Author: (your name here)
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include "rational.h"
#include <iostream>
// put your method bodies here
void rational::prompt()
{
  std::cout << "Top: ";
  std::cin >> top;
  std::cout << "Bottom: ";
  std::cin >> bottom;
}
void rational::display()
{
   int mixed;
   int top2;
   int bottom2;
   if(bottom % top == 0)
   {
      bottom2 = bottom;
      bottom = bottom / top;
      top2 = top;
      top = top / top2;
   } 

   if(top > bottom)
   {
      mixed = (top / bottom);
      top = (top % bottom);
      std::cout << mixed << " "  << top << "/" << bottom << "\n";
   }
   else
   std::cout << top << "/" << bottom << "\n";

   
   top = ((bottom * mixed) + top); 
}
void rational::displayDecimal()
{
   int mixed;
    if(top > bottom)
   {
      mixed = (top / bottom);
      top = (top % bottom);
      std::cout << (mixed + ((1.0)* top) / (bottom)) << "\n";
   }
   else 
   std::cout << ((1.0)*top) / (bottom) << "\n";
    
}
