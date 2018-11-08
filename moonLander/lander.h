/***********************************************************************
 * Header File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *  
 ************************************************************************/


#ifndef LANDER_H
#define LANDER_H

#include "uiDraw.h"
//#include "uiInteract"
#include "point.h"
#include "velocity.h"

#include <iostream>

/*********************************************
 * 
 *********************************************/
class Lander
{
private:
   Point point;
   Velocity velocity;
   int fuel;
   bool alive;
   bool landed;
public:
   Lander();
   Point getPoint() const;
   void setPoint(Point point);
   Velocity getVelocity() const;
   void setVelocity(Velocity velocity);
   bool isAlive() const;
   bool isLanded() const;
   int getFuel() const;
   bool canThrust();
   void setLanded(bool);
   void setAlive(bool);
   void setFuel(int);
   void applyGravity(float);
   void applyThrustLeft();
   void applyThrustRight();
   void applyThrustBottom();
   
   void advance();
   void draw();
};
#endif // LANDER_H
