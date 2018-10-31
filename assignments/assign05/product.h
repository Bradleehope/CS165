/***************************************************************
 * File: product.h
 * Author: (your name here)
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iomanip>
using namespace std;

// put your class definition here
class Product
{
   private:
   float price;
   float weight;
   float tax;
   float rate;
   float total;
   string name;
   string description;
   public:
   void displayAdvertising();
   void displayInventory();
   void displayReceipt();
   //void prompt();
   float getSalesTax();
   float getShippingCost();
   float getTotalPrice();
   void setName(string);
   void setDescription(string);
   void setBasePrice(float);
   void setWeight(float);
   string getName() const;
   string getDescription() const;
   float getBasePrice() const;
   float getWeight() const;

   Product();

   Product(string, string, float, float);
};
#endif
