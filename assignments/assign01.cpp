/***********************************************************************
* Program:
*    Assignment 01, Genetic Genealogy           
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

/*
*
*/
void getMarkers(char sequence[])
{
   cout << "Enter your DNA sequence: ";
   cin >> sequence;
}

/*
 *
 */
int getRelatives(string names[], char relDNA[][10])
{
   int relatives = 0; 
   
   cout << "Enter the number of potential relatives: ";
   cin >> relatives;
   cout << endl;
   for(int x = 1; x <= relatives; x++)
   {
      cout << "Please enter the name of relative #" << x << ": ";
      cin >> names[x];
   }
   cout << endl;
   
   for( int x = 1; x <= relatives; x++)
   {
      cout << "Please enter the DNA sequence for " << names[x] << ": ";
      cin.ignore();
      cin >> relDNA[x];
   }
   cout << endl;
   return relatives;
}

/*
*
*/
void calPercent(char sequence[], char relDNA[][10], int relatives, int percent[])
{
   
   for(int i = 1; i <= relatives; i++)
   {
      percent[i] = 0;
      for(int x = 0; x < 10; x++)
      {  
         if(relDNA[i][x] == sequence[x])
         {
            percent[i]+= 1;
         }
      }
   }
}

/*
*
*/
void displayPercent(string names[], int relatives, int percent[])
{
   for( int x = 1; x <= relatives; x++)
   {
      percent[x] *= 10;
      cout << "Percent match for " << names[x] << ": " 
           << percent[x] << "%" << endl;
   }
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   string names[50] = "";
   char sequence[10] = "";
   char relDNA[50][10];
   int percent[50];
   
   getMarkers(sequence);
   int relatives = getRelatives(names, relDNA);
   calPercent(sequence, relDNA, relatives, percent);
   displayPercent(names, relatives, percent);
   return 0;
}
