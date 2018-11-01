/********************************************************************
 * File: date.cpp
 * Purpose: Holds the implementation of the Date class methods.
 ********************************************************************/
#include "date.h"
#include <iostream>
// Put your method bodies here...
void Date::set()
{
   std::cout << "Month: ";
   std::cin >> month;
   std::cout << "Day: ";
   std::cin >> day;
   std::cout << "Year: "; 
   std::cin >> year;
  
} 
void Date::displayAmerican()
{
   std::cout << month << "/" << day << "/" << year << "\n";
}
void Date::displayEuropean()
{
   std::cout << day << "/" << month  << "/" << year << "\n";
}
void Date::displayIOS()
{
   std::cout << year << "-" << month << "-" << day << "\n";
}


i