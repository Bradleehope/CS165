/***************************************************************
 * File: product.cpp
 * Author: Bradlee Rothwell
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <iomanip>
#include <iostream>
using namespace std;
Product :: Product()
{
   setName("none");
   setDescription("");
   setBasePrice(0);
   setWeight(0);
   
}

Product :: Product(string name, string description, float price, float weight)
{
   setName(name);
   setDescription(description);
   setBasePrice(price);
   setWeight(weight);
}


//setters and getters
void Product :: setName (string n)
{
   name = n;
}

void Product :: setDescription(string d)
{
   description = d;
}

void Product :: setBasePrice(float p)
{
   price = p;
}

void Product :: setWeight(float w)
{
   weight = w;
}

string Product :: getName() const
{
   return name;
}

string Product :: getDescription() const
{
   return description;
}

float Product :: getBasePrice() const
{
   return price;
}

float Product :: getWeight() const
{
   return weight;
}

// put your method bodies here

float Product::getSalesTax()
{
   tax = (0.06 * price);
   return tax;
}

float Product::getShippingCost()
{
   if(weight < 5.0)
   {
      rate = 2;
      return rate;
   }
   else
   {
      rate = (2 + (0.1 * (weight - 5)));
      return rate;
   }
}

float Product :: getTotalPrice()
{
   total = price + getSalesTax() + getShippingCost();
   return total;
}

void Product :: displayInventory()
{
   cout.precision(2);
   cout << "$" << price << " - " << name << " - ";
   cout.precision(1);
   cout << weight << " lbs\n";
}

void Product :: displayAdvertising()
{
   if(price == 0)
   {   
      cout.precision(3);
   }
   else
   {
      cout.precision(2);
   }
   cout.setf(ios::showpoint);
   cout << name << " - $" << getBasePrice() << endl ;
   cout << "(" << description << ")" << endl;
}

void Product :: displayReceipt()
{
   cout.precision(2);
   cout << name << endl
        << "  Price:         $ " << setw(7) << getBasePrice() << endl
        << "  Sales tax:     $ " << setw(7) << getSalesTax() << endl
        << "  Shipping cost: $ " << setw(7) << getShippingCost() << endl
        << "  Total:         $ " << setw(7) << getTotalPrice() << endl;
}
