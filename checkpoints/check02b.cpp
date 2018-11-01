/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother Cook, CS165
* Author:
*    Bradlee Rothwell
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

// TODO: Define your Complex struct here
struct complex
{
   double real;
   double imaginary;

} c1, c2;

// TODO: Add your prompt function here
void prompt(complex & a)
{
   cout << "Real: ";
   cin >> a.real;
   cout << "Imaginary: ";   
   cin >> a.imaginary;
}


// TODO: Add your display function here


/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 **********************************************************************/
void addComplex(complex & c1, complex & c2)
{
   // TODO: Fill in the body of the add function
   double sumReal = 0;
   double sumImag = 0;
   sumReal = (c1.real + c2.real);
   sumImag = (c1.imaginary + c2.imaginary);
   
   if(int(sumReal) != sumReal || int(sumImag) != sumImag)
   {
      cout.precision(1);
      cout.setf(ios::showpoint);
      cout <<  "\nThe sum is: " << sumReal << " + " << sumImag;
   }
   else
   {
      cout.precision(0);
      cout <<  "\nThe sum is: " << sumReal << " + " << sumImag;
   }
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{  
   cout.setf(ios::fixed);
   // Declare two Complex objects, c1 and c2
   complex c1;
   complex c2;

   // Call your prompt function twice to fill in c1, and c2 
   prompt(c1);
   prompt(c2);

   // Declare another Complex for the sum
   complex sum;
   

   // Call the addComplex function, putting the result in sum;
   addComplex(c1, c2);
   cout << "i\n";
 
   return 0;
}


