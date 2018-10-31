// File: custome

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <iomanip>
using namespace std;

#include "address.h"

// put your Customer class here

class Customer
{
private:
   string name;
public:
   Address address;
   void setName(string);
   void setAddress(Address);
   string getName();
   Address getAddress();
   void display();
   
   Customer();
   Customer(string, Address);
};

#endif
