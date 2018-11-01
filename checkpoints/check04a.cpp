/***********************************************************************
* Program:
*    Checkpoint 04a, Classes   
*    Brother Cook, CS165
* Author:
*   Bradlee Rothwell 
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

class Book
{
private:
   char title[100];
   char author[100];
public:   
   void prompt()
   {
      cout << "Title: ";
      cin.getline(title, 100);
      cout << "Author: ";
      cin.getline(author, 100);
   }
   void display()
   {
      cout << "\"" << title << "\" by " << author << endl;
   }
};

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{   
   Book book;
   book.prompt();
   book.display();
   return 0;
}
