/***********************************************************************
* Program:
*    Checkpoint 00, Test 4          
*    Brother Cook, CS165
* Author:
*   Bradlee Rothwell 
*
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Student 
{
   private:
   int intelligence;
   public:
   Student()
   {
      intelligence = 0;
   }
   Student(int intelligence)
   {
      setIntelligence(intelligence);
   }
   int getIntelligence()
   {
      return intelligence;
   }
   void setIntelligence(int intelligence)
   {
      this->intelligence = intelligence;
   }
   void attendClass();
   void display();
};

void Student :: attendClass()
{
   intelligence = intelligence + 5;
}

void Student :: display()
{
   cout << "Intelligence: " << intelligence << endl;
}

int main()
{
   Student bob(87);
   bob.display();
   cout << "Bob attends class" << endl;
   bob.attendClass();
   bob.display();
   return 0;
}
