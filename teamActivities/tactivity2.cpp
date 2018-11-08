/***********************************************************************
* Program:
*    Assignment ##, ????          
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
using namespace std;

struct scripture
{
   string bookName;
   int chapter;
   int verse;
};


void displayScripture(scripture a)
{
  cout << a.bookName << " "
       << a.chapter << ":"
       << a.verse << endl;
}

void promptScripture(scripture & a)
{
   cout << "Enter book: ";
   getline(cin, a.bookName);
   cout << "Enter chapter: ";
   cin >> a.chapter;   
   cout << "Enter verse: ";
   cin >> a.verse;

}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{

   scripture myScripture[3];
  
  for(int i = 0; i < 3; i++)
  { 
    promptScripture(myScripture[i]);
    cin.ignore();
  }
       
  for(int i = 0; i < 3; i++)
  {
    displayScripture(myScripture[i]);
  } 
   return 0;
}
