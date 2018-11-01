/***********************************************************************
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{ 
   int max;
   cin >>  max;
   cin.ignore();
   char * line = new char[max];
   cin.getline(line, max);
   for (int i = 0; line[i] > 0; i += 1)   //will stop once i is the null character
   {
      cout << i << " " <<  line[i] << " " << (int) line[i] << endl;
   }
  
   return 0;
}
