/***********************************************************************
* Program:
*    Assignment ##, ????          
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
using namespace std;
class Student
{
   public:
   Student()
   {
      intelligence = 2;
   }
   Student(long long i)
   {
      setIntelligence(i);
      //intelligence = i;
   }
   long long getIntelligence()
   {
      
      return intelligence;
   }
   long long setIntelligence()
   {
      intelligence = i;
      if(i < 0)
      {
         intelligenece = 0;
      }
      else
         intelligence = i;
   }
   void attendClass()
   {
      intelligence *= intelligence; 
   }
   void display()
   {
      cout << "Intelligence is: " <<  intelligence << endl;
   }
   private:
   long long intelligence;
};

void display(Student * s[], int size)
{
   for(int i = 0; i < size; i += 1)
   {
      cout << "Index " << i << endl
           << "Intelligence " << s[i]->getIntelligence() << endl;
   }
}

/**********************************************************************

 ***********************************************************************/
int main()
{
   Student * student[3];
   Student bob;
   Student jill(10000); //she has higher intelligence
   student[0] = &bob;
   student[1] = &jill;
   bob.display();
   cout << "How smart is Bob? ";
   cin >> bob.intelligence;
   bob.display();
   jill.display();
   cout << "Jill? ";
   cin >> jill.intelligence;
   jill.display();
   display(student, 2);

   return 0;
}
