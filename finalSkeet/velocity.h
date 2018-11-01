/***********************************************************************
 * Header File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    
 ************************************************************************/


#ifndef VELOCITY_H
#define VELOCITY_H

#include "uiDraw.h"


#include <iostream>

/*********************************************
 *   
 *********************************************/
class Velocity
{
private:
   float dx;
   float dy;   
public:
   Velocity()
   {
   }
   Velocity(float dx, float dy)
   {
      setDx(dx);
      setDy(dy);
   }
   float getDx()
   {
      return dx;
   }
   float getDy()
   {
      return dy;
   }
   void setDx(float dx)
   {
      this->dx = dx;
   }
   void setDy(float dy)
   {
      this->dy = dy;
   }
};
  #endif // VELOCITY_H
