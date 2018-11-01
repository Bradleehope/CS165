/*******************
 * smartphone.h
 *******************/
#include <string>
#include <iomanip>
#include <iostream>
#include "phone.h"
using namespace std;
// TODO: Put your SmartPhone class here

class Smartphone : public Phone
{
private:
   string email;
public:
   Phone phone;
   void prompt();
   void display();
};
