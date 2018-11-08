#include "bullet.h"

void Bullet :: fire(Point point, float angle)
{
   this->point = point;

   velocity.setDx(BULLET_SPEED * (-cos(M_PI / 180.0 * angle)));
   velocity.setDy(BULLET_SPEED * (sin(M_PI / 180.0 * angle)));
}

void Bullet :: draw()
{
   drawDot(point);
}





