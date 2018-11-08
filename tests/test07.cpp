/***********************************************************************
* Program:
*    Checkpoint 00, Test 8          
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

class Microwave
{
   private:
   int time;
   int popcorn;
   int potato;
   public:
   Microwave(int time)
   {
      setTime(time);
   }
   void setTime(int time)
   {
      this->time = time;
   }
   int getTime()
   {
      return time;
   }
   bool cookPopcorn();
   bool cookPotato();
   bool advanceTime();
   void displayPopcorn();
   void displayPotato();
};

bool Microwave :: cookPopcorn()
{
   popcorn = 150;
   if(time == popcorn)
   {
      return true;
   }
   else 
      return false;
}

bool Microwave :: cookPotato()
{
   potato = 200;
   if(time == potato)
      return true;
   else
      return false;
}

bool Microwave :: advanceTime()
{
   for(int i = 0; i < time; i++)
   {
      cout << i << "seconds" << endl;
      if(i == time)
      {
         return true;
      }
      else 
         return false;
   }
}

void Microwave :: displayPopcorn()
{
   if(advanceTime())
   {
      cout << "Beep beep" << endl;
      if(cookPopcorn())
      {
         cout << "Your popcorn is done" << endl;
      }
      else 
         cout << "Your popcorn is not done" << endl;
   }
}

void Microwave :: displayPotato()
{
   if(advanceTime())
   {
      cout << "Beep beep" << endl;
      if(cookPotato())
      {
         cout << "Your potato is done" << endl;
      }
      else
         cout << "Your potato is not done" << endl;
   }
}
int main()
{
   Microwave microwave(100);
   microwave.cookPopcorn();
   microwave.advanceTime(); 
   microwave.displayPopcorn();
   microwave.cookPotato();
   microwave.advanceTime();   
   microwave.displayPotato();
   return 0;
}
