// File: customer


#include "customer.h"

// Put the method bodies for your customer class here
Customer :: Customer()
{
   setName("unspecified");
}

Customer :: Customer(string name, Address address)
{
   setName(name);
   setAddress(address);
}

void Customer :: setName(string name)
{
   this->name = name;
}

void Customer :: setAddress(Address address)
{
   this->address = address;
}

string Customer :: getName() 
{
   return this-> name;
}

Address Customer :: getAddress()
{
   return this->address;
}

void Customer :: display() 
{
   cout << this->name << endl;
   this->address.display();
}

