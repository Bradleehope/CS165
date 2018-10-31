/***************************************************************
 * File: product.h
 * Author: (your name here)
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

// put your class definition here
class Product
{
   private:
   float price;
   float weight;
   float tax;
   float rate;
   float total;
   char name[100];
   char description[500];
   public:
   void displayProfile();
   void displayLineItem();
   void displayReceipt(float tax, float rate, float total);
   void prompt();
   float getSalesTax();
   float getShippingCost();
   float getTotalPrice(float tax, float rate);
};
#endif
