/***********************************************************************
* Program:
*    Checkpoint 00, Test          
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

class RobotArm
{
private:
   int arm;
   int maxLength;
public:
   RobotArm()
   {
     
   }

   void extendArm()
   {
      cout << "Extend by either a 1 or a 5: ";
       cin >> arm;
      draw(arm);
   }

   void draw(int arm)
   { 
       int total = 0;
      
       for(int i = 0; i++)
       {
          cout << "*" << endl;
          total++;
       }
   }
};

int main()
{
   RobotArm* robotArm = new RobotArm;
   robotArm;
   robotArm->extendArm();
   robotArm->extendArm();

   return 0;
}

