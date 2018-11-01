#ifndef BAG_H
#define BAG_H
#include <vector>
#include <iomanip>
using namespace std;
/***********************************************************
 * Class: Bag
 * Description: Holds ints...for now
 ***********************************************************/
template<class T>
class Bag
{
private:
   int capacity;
   int size;
   int currentAddIndex;
   T* data;

public:
   Bag();

                        // Default constructor	
   // Getters
   int getCapacity() 
   {
      return capacity;
   }
   int getCount() const
   {
      return size;
   }

   T getItem(int index);
   void addItem(int item);     
};

template<class T>
Bag<T> :: Bag()
{
   data = new T [5];
   capacity = 5;
   size = 0;
   currentAddIndex = 0;
}
template<class T>
T Bag<T> :: getItem(int index)
{
   //if(index == 0)
  // {
      return index;
  // }
}
template<class T>
void Bag<T> :: addItem(int item)
{
   if (size == capacity)
   {
      capacity *= 2;
   }
   data[currentAddIndex] = item;
   currentAddIndex++;
   size++;
}

#endif

