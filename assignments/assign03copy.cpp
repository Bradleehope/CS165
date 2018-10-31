/***********************************************************************
* Program:
*    Assignment 03, Digital Forensics  
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
#include <sstream>
#include <stdlib.h>

using namespace std;

/***
*
***/
struct record
{
   string username;
   string filename;
   long timestamp;
};

/***
* *
***/
int getUser(char name[], record records[])
{
   cout << "Enter the access record file: ";
   cin >> name;
   ifstream fin(name);
   string line;
   int i = 0;
   string word;
   long time;
   char longword [10]; 
   while (fin)
   { 
      getline(fin, line);
      //parseLine(line);
      istringstream getword(line);

      getword >> word;
      records[i].filename = word;
      getword >> word;
      records[i].username = word;
      getword >> longword;
      records[i].timestamp = atol(longword);

      i++;

   }
   return --i;
}

/***
* *
***/
long getStart()
{
   long startadd;

   cout << "\nEnter the start time: ";
   cin >> startadd;

   return startadd;
}

/***
 * *
 * ***/
long getEnd()
{
   
   long endadd;

   cout << "Enter the end time: ";
   cin >> endadd;
   return endadd;
}

/***
 * *
 ***/
void display(long start, long end, record search[], int count )
{
   cout << "\nThe following records match your criteria:" << endl << endl
        << "      Timestamp                File                User\n"
        << "--------------- ------------------- -------------------\n";
   for (int i = 0; i < count; i++)
   {
      if (search[i].timestamp >= start && search[i].timestamp <= end)
      {
         cout << setw(15) << search[i].timestamp 
              << setw(20) << search[i].filename
              << setw(20) << search[i].username << endl;
      }
   }
}

/***
 **
 ****/
void parseLine(string line)
{
   string word;
   
   istringstream getword(line);
   getword >> word;
   getword >> word;
   getword >> word;
 
}
/********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   
   long start = 0;
   long end = 0;
   record recordArray[500];
   char name[100];
   int count;

   count = getUser(name, recordArray);
  
   start = getStart();
   end = getEnd();
   display(start, end, recordArray, count);
   cout << "End of records\n";
   return 0;
}
