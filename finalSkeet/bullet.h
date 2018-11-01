#ifndef BULLET_H
#define BULLET_H

#include <cmath>
#include "flying.h"
#include "uiDraw.h"

#define BULLET_SPEED 10.0

class Bullet : public Flying
{
private:
public:
   Bullet() 
   {
      point.setX(100);
      point.setY(-200);
   }
   void fire(Point point, float angle);
   virtual void draw();
};


#endif
