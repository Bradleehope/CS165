// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;
// Put your Address class here

class Address
{
   private:
   string street;
   string city;
   string state;
   string zip;
   public:
   void setStreet(string);
   void setCity(string);
   void setState(string);
   void setZip(string);
   string getStreet() const;
   string getCity() const;
   string getState() const;
   string getZip() const;
   void display() const;

   Address()
   {
      street = "unknown";
      city = "";
      state = "";
      zip = "00000";
   }
   Address(string e, string c, string a, string z)
   {
      street = e;
      city = c;
      state = a;
      zip = z;
   }
};

     






#endif
