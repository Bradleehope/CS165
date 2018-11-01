/***********************************************************************
* Program:
*    Checkpoint 04b, More Classes           
*    Brother Cook, CS165
* Author:
*   Bradlee Rothwell 
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Date
{
private:
   int month;
   int day;
   int year;
public:
   void set()
   {
      cout << "Month: ";
      cin >> month;
      cout << "Day: ";
      cin >> day;
      cout << "Year: ";
      cin >> year;
   }
   void displayAmerican()
   {
      cout << month << "/" << day << "/" << year << endl;
   }
   void displayEuropean()
   {
      cout << day << "/" << month << "/" << year << endl;
   }
   void displayIOS()
   {
      cout << year << "-" << month << "-" << day << endl;
   }
};

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   int month;
   int day;
   int year;
   
   
   Date date;
   date.set();
   date.displayAmerican();
   date.diplayEuropean();
   date.displayIOS();
   
   return 0;
}
