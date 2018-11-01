/*******************
 * smartphone.cpp
 *******************/

#include "smartphone.h"
#include "phone.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// TODO: Put your SmartPhone methods here
void Smartphone :: prompt()
{
   phone.promptNumber();
   cout << "Email: ";
   cin >> email;
}

void Smartphone :: display()
{
   phone.displayNumber();
   cout << email << endl;
}
