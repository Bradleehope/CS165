#include "point.h"

#include <iostream>
using namespace std;

/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/

Point :: Point()
{
   x = 5;
   y = 5;
}

Point :: Point(int a, int b)
{
   x = a;
   y = b;
   if (a < 1)
   {
      x = 1;
   }
   else if (a > 10)
   {
      x = 10;
   }

   if (b < 1)
   {
      y = 1;
   }
   else if (b > 10)
   {
      y = 10;
   }
}

int Point :: getX() const
{
   return x;
}

int Point :: getY() const
{
   return y;
}

void Point :: setX(int a)
{
   x = a;
   if(x < 1)
   {
      x = 1;
   }
   else if(x > 10)
   {
      x = 10;
   }
}

void Point :: setY(int b)
{
   y = b;
   if(y < 1)
   {
      y = 1;
   }
   else if(y > 10)
   {
      y = 10;
   }
   
}

void Point :: display() const
{
   // Note: We could just use x and y here and not the getters
   // because it's a member function. But this will force you
   // to deal with const :-)...

   cout << "(" << getX() << ", " << getY() << ")";
}

