/**********************************************************************
 * File: ta03.cpp
 * Author: Br. Burton
 *
 * Description: Use this file as a starting point for Team Activity 03.
 *    You do not need to "submit" your code, but rather, answer the
 *    questions in the I-Learn assessment.
 **********************************************************************/

#include <iostream>
#include <string>
using namespace std;

/***********************************************************************
 * Struct: Scripture
 * Description: Holds the reference to a scripture (book, chapter, verse
 ***********************************************************************/
struct Scripture
{
   string book;
   int chapter;
   int verse;
};

/***********************************************************************
 * Function: display
 * Description: Displays the passed scripture.
 ***********************************************************************/
void display(const Scripture &scripture)
{
   cout << scripture.book << " ";
   cout << scripture.chapter << ":";
   cout << scripture.verse;
}

void readFile(filename[])
{
   string line;
   ifstream fin(filename);
   if (fin.fail())
      return 0;
   fin.close();
   while(fin >> line)

/***********************************************************************
 * Function: main
 * Description: The driver for the program.
 ***********************************************************************/
int main()
{
   char filename[100];
   Scripture scripture; 
   // Insert your code here to prompt for the name of a file
   cout << "Please enter the name of the file: ";
   cin >> filename;
   // and pass it to a readFile function
   readFile(filename);

   return 0;
}
