/****************************
 * File: icecream.h
 ****************************/
#ifndef ICECREAM_H
#define ICECREAM_H

#include <string>
using namespace std;

class IceCream
{
private:
   string flavor;
   float price;

public:
   IceCream();
   IceCream(string flavor, float price);
   static float salesTax;

   float getTotalPrice() const;
   void prompt();
   void display() const;
};


#endif
