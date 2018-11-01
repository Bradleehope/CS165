#ifndef FLYING_H
#define FLYING_H

#include "point.h"
#include "velocity.h"

class Flying
{
private:
   bool alive;
   int score;
public:
   int life;
   int bonus;
   int points;
   Point point;
   Velocity velocity;

   Flying()
   {
      alive = true;
      point = 0;
      life = 1;
      bonus = 0;
      score = 0;
   }
   Point getPoint() const
   {
      return point;
   }
   void setPoint(Point point)
   {
      this->point = point;
   }
   Velocity getVelocity() const
   {
      return velocity;
   }
   void setVelocity(Velocity velocity)
   {
      this->velocity = velocity;
   }
   bool isAlive() const
   {
      return alive;
   }
   void getAlive(bool)
   {
      this->alive = alive;
   }
   void advance();
   void kill();
   virtual void draw() = 0;
   int hit();   
};

#endif
