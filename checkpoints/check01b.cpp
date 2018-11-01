/***********************************************************************
* Program:
*    Checkpoint 01b, Arrays         
*    Brother Cook, CS 165
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

/*
*
*/
int getSize()
{
   int lsize;
   
   cout << "Enter the size of the list: ";
   cin >> lsize;
   return lsize;
}

/*
*
*/
void getList(int lsize, int index[])
{
   int i = 0;
   
   for(int x = 0; x < lsize; x++)
   {
      cout << "Enter number for index " << x << ": ";
      cin >> index[i];  
      cin.ignore(); 
      i++;  
   } 
   cout << endl;
}

/*
*
*/
void displayMultiples(int lsize, int index[])
{
   int x = 0;

   cout << "The following are divisible by 3:\n";
   
   for (int i = 0; i < lsize; i++)
   {  
      if (index[i] % 3 == 0)
      {
         cout << index[i] << endl;
         x = 1;
      }
   }
   if(x = 0)
   {
      cout << endl;
   }

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
   
   int index[20];
   
   int size = getSize();
   getList(size, index);
   displayMultiples(size, index);


   return 0;
}
