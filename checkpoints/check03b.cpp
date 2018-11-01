/***********************************************************************
* Program:
*    Checkpoint 03b, Errors         
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
using namespace std;

int prompt() throw(const char *)
{
   int number;
   cout << "Enter a number: ";
   cin >> number;
   
   try
   {
      if(cin.fail())
      {
        throw "Invalid input.";
      }
      else 
      {
         cout << "The number is " << number << ".\n";
         return 1;
      }
   }
   catch(const char * message)
   {
      cout << message << endl;
      cin.clear();
      cin.ignore(100, '\n');
      return 0;
   }
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{   
   int input = 0;
   while(input == 0)
   {
      input = prompt();
   }
      
   return 0;
}
