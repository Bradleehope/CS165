// File: order.h

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"


// Put your Order class here

class Order
{
   private:
   int quantity;
   float total;
   public:
   Customer customer;
   Product product;
   void setProduct(Product);
   void setQuantity(int);
   void setCustomer(Customer);
   Product getProduct();
   int getQuantity();
   Customer getCustomer();
   string getShippingZip();
   float getTotalPrice();
   void displayShippingLabel();
   void displayInformation();
   Order();
   Order(Product, int, Customer);
};
   
#endif
