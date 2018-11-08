/***********************************************************************
* Program:
*    Checkpoint 00, Test 11          
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
#include "unistd.h"
using namespace std;

class Car
{
   private:
   int tankSize;
   int fullTank;
   int i;
   public:
   Car(int tankSize)
   {
      setTank(tankSize);
      
      i = 0;
   }
   void fillTank();
   bool driving();
   void setTank(int tankSize)
   {
      this->tankSize = tankSize;
   }
   int getTank()
   {
      return tankSize;
   }
};

void Car :: fillTank()
{
   fullTank = (tankSize - 2);
}

bool Car :: driving()
{
   //for(int i = 0; i <= fullTank; i++)
  // {

      if(i <= fullTank)
      {
         cout << "*";

         i++;
         return true;
      }
      else
         return false;
   //}
}

int main()
{
   Car* truck = new Car(20);
   truck->fillTank();
   while(truck->driving() == true)
   {
      truck->driving();
      usleep(200000);
   }
   cout << endl << "Your gas tank is almost empty" << endl;
   delete [] truck;
   *truck = Car(20);
   truck->fillTank();
   return 0;
}
