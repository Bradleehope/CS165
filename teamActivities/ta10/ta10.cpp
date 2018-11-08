#include <iostream>
#include <vector>
using namespace std;


void promptNumbers(vector<int> & numbers)
{

   int myint;
   while(myint != 0)
   {
      cout << "Number: ";
      cin >> myint;
      numbers.push_back(myint);
   }
}

void displayNumbers(vector<int> & numbers)
{
   for(vector <int> :: iterator i = numbers.begin(); i < numbers.end(); i++)
   {
      cout << *i << "\t";
   }
   cout << endl;
}

void removeOdds(vector<int> & numbers)
{
   for(vector <int> :: iterator i = numbers.begin(); i < numbers.end(); i++)
   {
      while(*i % 2 != 0)
      {
        numbers.erase(i);
      }
   }
}


int main()
{
   vector <int> numbers;
   promptNumbers(numbers);
   displayNumbers(numbers);
   removeOdds(numbers);
   displayNumbers(numbers);
}
