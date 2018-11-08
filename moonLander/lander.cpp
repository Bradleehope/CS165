/***********************************************************************
 * Source File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/

#include "lander.h"
#include <cassert>

/******************************************
 * 
 *****************************************/
Lander :: Lander()
{
   setAlive(true);
   setLanded(false);
   velocity.setDx(0.0);
   velocity.setDy(0.0);
   point.setX(0.0);
   point.setY(0.0);
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
}

void Lander :: setAlive(bool alive)
{
   this->alive = alive;
}

bool Lander :: canThrust()
{
   return true;
}

void Lander :: applyGravity(float gravity)
{
}

void Lander :: applyThrustLeft() 
{
}

void Lander :: applyThrustRight()
{
}

void Lander :: applyThrustBottom()
{
}

void Lander :: advance()
{
}




