/***********************************************************************
* Program:
*    Assignment  ,         
*    Brother Cook, CS124
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
#include <sstream>
using namespace std;

void read(stringstream &ss) throw (const char *) 
{
   int x;
   ss >> x;
   if(ss.fail())
   {
      throw "Cannot read integer.";
   }
   cout << x << endl;
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

   //ifstream fin("data.txt");
   stringstream ss("324 hi 123");
   
   while(!ss.eof())
   {
     try 
     {
        cout << "try to read";
        read(ss);
   
     }
     catch(const char * message)
     {
        cout << message << endl;
        ss.clear();
        ss.ignore(100, ' ');
     }
   }

   return 0;
}
