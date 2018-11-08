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
using namespace std;

void print(char a[][50], int row)
{
   for (int i = 0; i < rows; i += 1)
   {
      cout << a[i] << endl;   
   }
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
/* int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   ifstream fin ("data.txt");
   char x[100][50]
   int i = 0;

   while (fin >> x)
   {
      i++;
   }

   print(x, i);
   
   return 0;
}*/







int main()
{
   char c;
   cin >> c;
   cout << c << endl;
   cin.ignore();
s
   char s[200];
   cin.getline(s, 100);
   cout << s << endl;
   return 0;
}
