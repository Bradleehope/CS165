// File: order.cpp

#include "order.h"
#include "product.h"
#include "customer.h"
Order :: Order()
{
   setQuantity(0);
}

Order :: Order(Product product, int quantity, Customer customer)
{
   setProduct(product);
   setQuantity(quantity);
   setCustomer(customer);
}

// Put your the method bodies for your order class herei
Product Order :: getProduct()
{
   return this->product;
}

Customer Order :: getCustomer()
{
   return this->customer;
}

int Order :: getQuantity()
{
   return this->quantity;
}

void Order :: setProduct(Product product)
{
   this->product = product;
}

void Order :: setCustomer(Customer customer)
{
   this->customer = customer;
}

void Order :: setQuantity(int quantity)
{
   this->quantity = quantity;
}

void Order :: displayShippingLabel()
{
   customer.display();
}

string Order :: getShippingZip()
{
   return customer.address.getZip();
}

float Order :: getTotalPrice()
{
   total =  product.getTotalPrice() * quantity;
   return total;
}

void Order :: displayInformation()
{
   cout << customer.getName() << endl;
   cout << product.getName() << endl;
   cout.precision(2);
   cout << "Total Price: $" << getTotalPrice() << "\n";
}


