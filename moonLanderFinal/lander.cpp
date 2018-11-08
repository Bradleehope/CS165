/***********************************************************************
 * Source File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/
#include "velocity.h"
#include "lander.h"
#include <cassert>
#include <iomanip>
#include <iostream>
using namespace std;
/******************************************
 * 
 *****************************************/
Lander :: Lander()
{
   setAlive(true);
   setLanded(false);
   velocity.setDx(0.0);
   velocity.setDy(0.0);
   point.setX(100);
   point.setY(100);
   applyGravity(0.1);
}

void Lander :: draw() //draws graphics on the screen
{
   drawLander(point);
}

int Lander :: getFuel() const
{
   return fuel;
}

Point Lander :: getPoint() const
{
   return point;
}

Velocity Lander :: getVelocity() const
{
   return velocity;
}

bool Lander :: isAlive() const
{
   return alive;
}

bool Lander :: isLanded() const
{
   return landed;
}

void Lander :: setPoint(Point point)
{
   this->point = point;
}

void Lander :: setVelocity(Velocity velocity)
{
   this->velocity = velocity;
}

void Lander :: setLanded(bool landed)
{
   this->landed = landed;
}

void Lander :: setFuel(int fuel)
{
   this->fuel = fuel;
   fuel = 500;   
}

void Lander :: setAlive(bool alive)
{
   this->alive = alive;
}

bool Lander :: canThrust() 
{
   if(isAlive() && !isLanded())
   {  
      if(fuel <= 0)
      {
         return false;
      }
      return true;
   }
}

void Lander :: applyGravity(float gravity)
{
      velocity.setDy(velocity.getDy() - gravity);
      setPoint(point);
}

void Lander :: applyThrustLeft() 
{
   if(canThrust())
   {
      velocity.setDx(velocity.getDx() + 0.1);
      setFuel(fuel - 1);      
      drawLanderFlames(point, false, true, false);
   }
}

void Lander :: applyThrustRight()
{
   if(canThrust())
   {
      velocity.setDx(velocity.getDx() - 0.1);
      setFuel(fuel - 1);      
      drawLanderFlames(point, false, false, true);
   }
}

void Lander :: applyThrustBottom()
{
   if(canThrust())
   {
      velocity.setDy(velocity.getDy() + 0.3);
      setFuel(fuel - 3);      
      drawLanderFlames(point, true, false, false);
   }
}

void Lander :: advance()
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy());
}




