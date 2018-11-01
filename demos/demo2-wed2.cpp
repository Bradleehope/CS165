/**********************************************************************
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct house
{
   int sqFeet;
   string color;
};

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   ifstream fin ("house2.txt");
   house small;
   house neighborhood[4];
   int i = 0;                        //:set spell to check spelling 
   while (fin >> neighborhood[i].color && fin >> neighborhood[i].sqFeet)     // press and hold v then press y to copy
   {
      cout << i << setw(24) << "sqFeet" << neighborhood[i].sqFeet << endl; //yyp to copy and paste a line
      cout << i << setw(24) <<  "color" <<  neighborhood[i].color << endl; 
   }
   return 0;
}
