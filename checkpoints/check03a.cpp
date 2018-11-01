/***********************************************************************
* Program:
*    Checkpoint 03a, Exceptions         
*    Brother Cook, CS165
* Author:
*    Bradlee Rothwell
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int prompt()throw(const char *)
{
   int number;
   
   cout << "Enter a number: ";
   cin >> number;
   
   if(number < 0)
   {
      throw "The number cannot be negative.";
   }
   if(number > 100)
   {
      throw "The number cannot be greater than 100.";
   }
   if(number % 2 != 0)
   {
      throw "The number cannot be odd.";
   }
   else
   {
      cout << "The number is " << number << ".\n";
   }
   return number;
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   //prompt();
   
   try 
   {
      prompt();
   }
   catch(const char * message)
   {
      cout << "Error: " << message << endl;
   }
   return 0;
}
