/***************************************************************
 * File: product.cpp
 * Author: Bradlee Rothwell
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <iomanip>
#include <iostream>
using namespace std;

// put your method bodies here
void Product::prompt()
{
   cout << "Enter name: ";
   cin.getline(name, 100);
   cout << "Enter description: ";
   cin.getline(description, 500);
   cout << "Enter weight: ";
   cin >> weight;
   cout << "Enter price: ";
   cin >> price;
   while(cin.fail())
   {

      cin.clear();
      cin.ignore(300, '\n'); 
      cout << "Enter price: ";
      cin >> price;
      while(price < 0)
      {
      cout << "Enter price: ";
      cin >> price;
      }
   }
   while(price < 0)
   {
      cout << "Enter price: ";
      cin >> price;
      while(cin.fail())
      {  
         cin.clear();
         cin.ignore(300, '\n'); 
         cout << "Enter price: ";
         cin >> price;
       }
   }

}

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

float Product::getTotalPrice(float tax, float rate)
{
   total = rate + tax + price;
   return total;
}

void Product::displayProfile()
{
   cout << name << " - $" << price << "\n(" << description << ")\n";
}

void Product::displayLineItem()
{ 
   cout.precision(2);
   cout << "$" << price << " - " << name;
   cout.precision(1);     
   cout << " - " << weight << " lbs\n";
   cout.precision(2); 
}

void Product::displayReceipt(float tax, float rate, float total)
{
   cout << name <<endl
        << "  Price:         $   " << price << endl
        << "  Sales tax:     $    " << tax << endl
        << "  Shipping cost: $    " << rate << endl
        << "  Total:         $   " << total << endl;
}
