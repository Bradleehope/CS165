/***********************************************************************
* Program:
*    Assignment ##, ????          
*    Brother Cook, CS165
* Author:
*   Bradlee Rothwell 
* Summary: 
*  
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Power5VDC
{
public:
   int getAmount()
   {
      return 10;
   }
};

class Charger
{
public:
   Power5VDC provide()
   {
      Power5VDC power;
      return power;
   }

};

class Phone
{
private:
   int batteryLife;
public:
   Phone()
   {
      batteryLife = 0;
   }
   void charge(Power5VDC power)
   {
      batteryLife += power.getAmount();
   }
   void displayBatteryLife()
   {
      cout << "Battery life is " << batteryLife << endl;
   }
};
/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   Phone phone;
   Charger charger;
   phone.displayBatteryLife();
   phone.charge(charger.provide());
   phone.displayBatteryLife();
   return 0;
}
