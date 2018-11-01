/***********************************************************************
* Program:
*    Checkpoint 09a, Virtual Functions
*    Brother Cook, CS165
* Author:
*    Bradlee Rothwell
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your classes here
class Car
{
protected:
   string name;
public:
   string getName() { return name; };
   void setName(string n) { name = n; };
   virtual string getDoorSpecs()
   {
      return "Unknown doors";
   }
   Car(string n)
   {
      name = "Unknown model";
      setName(n);
   }
   
};


class Civic : public Car
{
public:
   virtual string getDoorSpecs()
   {
      return "4 doors";
   }
   Civic() : Car("Civic") {};
};

class Odyssey : public Car
{
public:
   virtual string getDoorSpecs()
   {
      return "2 front doors, 2 sliding doors, 1 tail gate";
   }
   Odyssey() : Car("Odyssey") {};
};

class Ferrari : public Car
{
public:
   virtual string getDoorSpecs()
   {
      return "2 butterfly doors";
   }
   Ferrari() : Car("Ferrari") {};
};



/**********************************************************************
 * Function: attachDoors
 * Purpose: This function can accept any type of Car object. It will
 *  call the appropriate functions to display the name and the doors info.
 ***********************************************************************/

// TODO: Include your attachDoors function here

void attachDoors(Car & car)
{
   cout << "Attaching doors to "<< car.getName()
        << " - " << car.getDoorSpecs() << endl;

}
/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // You should not change main

   Civic civic;
   Odyssey odyssey;
   Ferrari ferrari;

   attachDoors(civic);
   attachDoors(odyssey);
   attachDoors(ferrari);

   return 0;
}


