/***********************************************************************
* Program:
*    Checkpoint 00, Test 5          
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

class Clock
{
   private:
   int hours;
   int minutes;
   public:
   Clock()
   {
      hours = 1;
      minutes = 0;
   }
   Clock(int hours, int minutes)
   {
      setHours(hours);
      setMinutes(minutes);
   }
   void display();
   void advance();
   int getMinutes() 
   {
      return minutes;
   }
   int getHours() 
   {
      return hours;
   }
   void setMinutes(int minutes) 
   {
      this-> minutes = minutes;
   }
   void setHours(int hours)
   {
      this->hours = hours;
   }
};

void Clock :: display()
{
   cout << "The current time is: " << hours << ":" << minutes << endl;
}

void Clock :: advance()
{
   minutes++;
   if(minutes > 59)
   {
      hours++;
      minutes = 0;
      if(hours = 12)
      {
         hours = 1;
      }
   }
}

int main()
{
   Clock clock(1, 0);
   clock.advance();
   clock.display();
   for(int i = 0; i < 100; i++)
   {
     clock.advance();
     clock.display();
   }

   return 0;
}
