#include "flying.h"

int Flying :: hit()
{
   life--;
   if(life == 0)
   {
      kill();
      return bonus + points;
   }

   return points;
}

void Flying :: advance()
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy());
}

void Flying :: kill()
{
   alive = false;
}
