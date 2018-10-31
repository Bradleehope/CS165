// File: address.cpp

#include "address.h"
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

// Put your method bodies for the address class here

void Address :: setStreet(string e)
{
   street = e;
}

void Address :: setCity(string c)
{
   city = c;
}

void Address :: setState(string a)
{
   state = a;
}

void Address :: setZip(string z)
{
   zip = z;
}

string Address :: getStreet() const
{
   return street;
}

string Address :: getCity() const
{
   return city;
}

string Address :: getState() const
{
   return state;
}

string Address :: getZip() const
{
   return zip;
}

void Address :: display() const
{
   cout << getStreet() << endl
        << getCity() << ", " << getState() << " " << getZip() << endl;
}

