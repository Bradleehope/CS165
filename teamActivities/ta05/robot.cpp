#include "robot.h"
#include <iostream>
using namespace std;

/************************************
 * Function: Display
 * Purpose: Displays the robot.
 ************************************/

Robot :: Robot()
{
   energy = 100;
}

Robot :: Robot(int eng)
{
   energy = eng;
   if (eng < 0)
   {
      energy = 0;
   }
}

Robot :: Robot(Point pos, int eng)
{
   position = pos;
   energy = eng;
}

Point Robot ::  getPosition() const
{
   return position;
}

int Robot :: getEnergy() const
{
   return energy;
}

void Robot :: setPosition(Point pos)
{
   position = pos;
}

void Robot :: setEnergy(int eng)
{
   energy = eng;
   if(eng < 0)
   {
      energy = 0;
   }
}

void Robot :: moveUp()
{
   if(getX() == 10)
   {
      setX(x);
   }
   else if(getX() < 10)
   {
      setX(x++);
   }
}

void Robot :: moveDown()
{
   if(getX() == 1)
   {
      setX(x);
   }
   else if(getX() > 1)
   {
     setX(x--);
   }
}

void Robot :: moveLeft()
{
   if(getY() == 10)
   {
     setY(y);
   }
   else if(getY() < 10)
   {
     setY(y++);
   }
}

void Robot :: moveRight()
{
   if(getY() == 1)
   {
      setY(y);
   }
   else if(getY() > 1)
   {
      setY(y--);
   }
}

void Robot :: display() const
{
   position.display();
   cout << " - Energy: " << getEnergy();
}

