/***********************************************************************
* Program:
*    Checkpoint 02a, Structs        
*    Brother Cook, CS165
* Author:
*   Bradlee Rothwell 

*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct student 
{
   string fname;
   string lname;
   int id;
};

void promptStudent(student & a)
{
   cout << "Please enter your first name: ";
   getline(cin, a.fname);
   cout << "Please enter your last name: ";
   getline(cin, a.lname);
   cout << "Please enter your id number: ";
   cin >> a.id;
}

void displayStudent(student a)
{
   cout << "Your information:" << endl;
   cout << a.id << " - " << a.fname << " " << a.lname << endl;
   
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   student studentUser;
   promptStudent(studentUser);
   cout << endl;
   displayStudent(studentUser);
   
   return 0;
}
