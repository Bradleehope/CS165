#ifndef ROBOT_H
#define ROBOT_H

#include "point.h"

class Robot
{
private:
   Point position;
   int energy;

public:
   Robot();
   Robot(int);
   Robot(Point, int);
   void display() const;
   Point getPosition() const;
   int getEnergy() const;
   void setPosition(Point);
   void setEnergy(int);
   void moveUp();
   void moveDown();
   void moveLeft();
   void moveRight(); 

};

#endif
