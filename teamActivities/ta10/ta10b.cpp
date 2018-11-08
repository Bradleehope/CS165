#include <iostream>
#include <vector>
#include <list>
using namespace std;


void promptNumbers(list<int> & numbers)
{

   int myint;
   while(myint != 0)
   {
      cout << "Number: ";
      cin >> myint;
      numbers.push_back(myint);
   }
}

void displayNumbers(list<int> & numbers)
{
   for(list<int> :: iterator i = numbers.begin(); i != numbers.end(); i++)
   {
      cout << *i << "\t";
   }
   cout << endl;
}

void removeOdds(list<int> & numbers)
{
   for(list<int> :: iterator i = numbers.begin(); i != numbers.end(); i++)
   {
      while(*i % 2 != 0)
      {
        numbers.erase(i);
      }
   }
}

void displayRNumbers(list<int> & numbers)
{  
   numbers.reverse();
   for(list<int> :: iterator i = numbers.begin(); i != numbers.end(); i++)
   {
      cout << *i << "\t";
   }
}


int main()
{
   list <int> numbers;
   promptNumbers(numbers);
   displayNumbers(numbers);
   //removeOdds(numbers);
   displayRNumbers(numbers);
}
