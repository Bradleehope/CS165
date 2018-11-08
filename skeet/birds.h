#ifndef BIRDS_H
#define BIRDS_H

#include "flying.h"

class Bird : public Flying
{
public:
   Bird() {};
   virtual void draw() = 0;
};

class StandardBird : public Bird
{
public:
   StandardBird()
   {
      point.setX(-200);
      point.setY(random(-200, 200));
      velocity.setDx(random(3, 6));
      if(point.getY() > 0)
      {
         velocity.setDy(-random(0, 4));
      }
      else
         velocity.setDy(random(0, 4));
      life = 1;
      points = 1;
   }
   virtual void draw();
};

class ToughBird : public Bird
{
public:
   ToughBird()
   { 
      point.setX(-200);
      point.setY(random(-200, 200));
      velocity.setDx(random(2, 4));
      if(point.getY() > 0)
      {
         velocity.setDy(-random(0, 3));
      }
      else
         velocity.setDy(random(0, 3));
      life = 3;
      points = 1;
   }
   virtual void draw();
};

class SacredBird : public Bird
{
public:
   SacredBird() 
   {
      point.setX(-200);
      point.setY(random(-200, 200));
      velocity.setDx(random(3, 6));
      if(point.getY() > 0)
      {
         velocity.setDy(-random(0, 4));
      }
      else
         velocity.setDy(random(0, 4));
      life = 1;
      points = -10;
   }
   virtual void draw();
};


#endif

