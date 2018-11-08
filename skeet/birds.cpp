#include "birds.h"


void StandardBird :: draw()
{
   drawCircle(point, 15);
}

void ToughBird :: draw()
{
   drawToughBird(point, 15, 3);
}

void SacredBird :: draw()
{
   drawSacredBird(point, 15);
}
