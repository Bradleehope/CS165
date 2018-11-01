/********************************************************************
 * File: date.h
 * Purpose: Holds the definition of the Date class.
 ********************************************************************/

#ifndef DATE_H
#define DATE_H

// put your class definition here
class Date 
{
private:
   int month;
   int year;
   int day;
public:
   void set();
   void displayAmerican();
   void displayEuropean();
   void displayIOS();
};

     
// along with the data members, and method prototypes




#endif
