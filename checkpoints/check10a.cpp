/***********************************************************************
* Program:
*    Checkpoint 10a, Vectors
*    Brother Cook, CS165
* Author:
*    Bradlee Rotwell
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void promptInt(vector<int> & numbers)
{
   int num;
   while(num != 0)
   {
      cout << "Enter int: ";
      cin >> num;
      numbers.push_back(num);
   }
}

void displayInt(vector<int> & numbers)
{
   for(vector <int> :: iterator i = numbers.begin(); i < numbers.end(); i++)
   {
      if(*i != 0)
      {
         cout << *i << "\n";
      }
   }
}  

void promptString(vector<string> & words)
{
   string word;
   while(word != "quit")
   {
      cout << "Enter string: ";
      cin >> word;
      words.push_back(word);
   }
}

void displayString(vector<string> & words)
{
   for(vector <string> :: iterator i = words.begin(); i < words.end(); i++)
   {
      if(*i != "quit")
      {
         cout << *i << "\n";
      }
   }
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   vector <string> words;
   vector <int> numbers;
   
   promptInt(numbers);
   cout << "Your list is:" << endl;
   displayInt(numbers);
   cout << endl;
   promptString(words);
   cout << "Your list is:" << endl;
   displayString(words);

   return 0;
}


