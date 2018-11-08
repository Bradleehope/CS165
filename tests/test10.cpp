/***********************************************************************
* Program:
*    Checkpoint 00, Test 10          
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

class WashingM
{
   private:
   int cycles;
   int totalCycles;
   int rotation;
   public:
   WashingM()
   {
      rotation = 0;
   }
   WashingM(int cycles)
   {
      rotation = 0;
      setAgitate(cycles);
   }

   bool agitate();
   void setAgitate(int cycles)
   {
      totalCycles++;
      this->cycles = cycles;
   }

   int getAgitate()
   {
      return cycles;
   }
   void rotateL();
   void rotateR();
   void display();
};

bool WashingM :: agitate()
{
   if(cycles == totalCycles)
   {
      return false;
   }
   else
      return true;
}

void WashingM :: rotateR()
{
      
       cout << "----"; 
       cout << "0000";
       cout << endl;
 }

      
void WashingM :: rotateL()
{

         cout << "0000";
         cout << "----" ;
         cout << endl;
}

void WashingM :: display()
{

   for(int time = 0; time < getAgitate(); time++)
   {
      rotateL();
      rotateR();
   }
   if(agitate() == true)
   {
      cout << "Your wash is not done" << endl;
   }
   else
      cout << "Your wash is done" << endl;
}

/**********************************************************************

 ***********************************************************************/
int main()
{
   WashingM washingM(1);
   washingM.display();
   return 0;
}
